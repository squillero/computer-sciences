/*--------------*-----------------------------------------------------------*\
*|   ######     | CLASS SAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)             *
*|  #######     | (!) Giovanni Squillero <squillero@polito.it>               *
*|  ####   \    |------------------------------------------------------------*
*|   ##G   c\   | Copying and distributing this file for classroom use,      *
*|   ##     _\  | either with or without modification, are permitted without *
*|   |    _/    | royalties provided that this 9-line comment is preserved.  *
*|   |   _/     | ===> THIS FILE IS OFFERED AS-IS, WITHOUT ANY WARRANTY <=== *
\*--------------*-----------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

#define NUM_SENSORS 10
#define ROLLING_AVERAGE_STEPS 5
#define FILENAME_LIMITS "20170203-C_limits.txt"
#define FILENAME_MEASURES "20170203-C_measures.txt"

typedef struct _SENSOR_DEF {
	double min, max;
} SENSOR_DEF;

// PROTOTYPES
int ReadMeasureLine(FILE *input, int line);

/***
 * 2-dim array with the last ROLLING_AVERAGE_STEPS readings
 * for each sensor. i'm keeping it global to make life easier.
 */
double Measures[ROLLING_AVERAGE_STEPS][NUM_SENSORS];

/***
 * Read a line from the file of measures
 * Returns FALSE on EOF -- ie. !feof()
 */
int ReadMeasureLine(FILE *input, int line)
{
	for(int t = 0; t < NUM_SENSORS; ++t) {
		fscanf(input, "%lf", &Measures[line][t]);
	}
	return !feof(input);
}

/***
 * Compute rolling average for a given sensor (valid data are in Measures)
 */
double Average(int sensor)
{
	double avg = 0.0;
	for(int r = 0; r < ROLLING_AVERAGE_STEPS; ++r) {
		avg += Measures[r][sensor];
	}
	return avg / (double)ROLLING_AVERAGE_STEPS;
}

/***
 * The program!
 */
int main(int argc, char *argv[])
{
	SENSOR_DEF sensor[NUM_SENSORS];
	int max_out_of_bounds;

	// -- boilerplate starts here
	if(argc != 2) {
		fprintf(stderr, "ERROR: Exactly one argument is required.\n");
		exit(EXIT_FAILURE);
	}
	sscanf(argv[1], "%d", &max_out_of_bounds);
	FILE *file_limit = fopen(FILENAME_LIMITS, "r");
	if(file_limit == NULL) {
		fprintf(stderr, "ERROR: Can't open limits file \"%s\".\n", FILENAME_LIMITS);
		exit(EXIT_FAILURE);
	}
	FILE *file_measures = fopen(FILENAME_MEASURES, "r");
	if(file_measures == NULL) {
		fprintf(stderr, "ERROR: Can't open measures file \"%s\".\n", FILENAME_MEASURES);
		exit(EXIT_FAILURE);
	}
	// -- boilerplate ends here

	// read limits
	for(int t = 0; t < NUM_SENSORS; ++t) {
		fscanf(file_limit, "%lf", &sensor[t].min);
		fscanf(file_limit, "%lf", &sensor[t].max);
	}

	// kickstart: fill up the first ROLLING_AVERAGE_STEPS-1 lines
	int line;
	for(line = 0; line < ROLLING_AVERAGE_STEPS - 1; ++line) {
		ReadMeasureLine(file_measures, line);
	}

	// let's roll
	int tot_anomalies = 0;
	while(ReadMeasureLine(file_measures, line % ROLLING_AVERAGE_STEPS)) {
		/*** 
		 * please note the % (mod): the index we store the line in cycles
		 * in [0, 1, 2, ..., ROLLING_AVERAGE_STEPS-1], thus Measures is always
		 * filled with the last ROLLING_AVERAGE_STEPS measures.
		 */
		int out_of_bounds = 0;
		for(int s = 0; s < NUM_SENSORS; ++s) {
			if(Average(s) < sensor[s].min || Average(s) > sensor[s].max) {
				++out_of_bounds;
			}
		}
		if(out_of_bounds > max_out_of_bounds) {
			printf("Anomaly detected at line %d\n", line + 1);
			++tot_anomalies;
		}
		++line;
	}
	printf("SUMMARY: Found %d anomalies\n", tot_anomalies);

	// that's all folks
	fclose(file_limit);
	fclose(file_measures);
	return EXIT_SUCCESS;
}
