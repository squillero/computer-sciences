/*-**********************************************************************-*\
*             * CLASS SAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)             *
*   #####     * (!) 2016, Giovanni Squillero <squillero@polito.it>         *
*  ######     *                                                            *
*  ###   \    * Copying and distributing this file, either with or without *
*   ##G  c\   * modification, is permitted in any medium without royalty,  *
*   #     _\  * provided that this 10-line comment is preserved.           *
*   |  _/     *                                                            *
*             * ===> THIS FILE IS OFFERED AS-IS, WITHOUT ANY WARRANTY <=== *
\*-**********************************************************************-*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define INPUT_FILE_CALLS "exam-201606B_calls.dat"
#define INPUT_FILE_RATES "exam-201606B_rates.dat"
#define NUM_RATES 4

// Time: [h]our, [m]inute, and [s]econd
typedef struct _TIME {
    int h, m, s;
} TIME;

// Date: [d]ay, [m]onth, and [y]ear
typedef struct _DATE {
    int d, m, y;
} DATE;

// PROTOTYPES
int CompareTime(TIME a, TIME b);
int CountTicks(TIME a, TIME b);
int TimeSlot(TIME t);

int main(int argc, char *argv[])
{
    if(argc != 3 || atoi(argv[2]) <= 0 || atoi(argv[2]) > 12) {
        fprintf(stderr, "Usage: %s TEL MONTH\n", argv[0]);
        exit(1);
    }
    char *targetNumber = argv[1];
    int targetMonth = atoi(argv[2]);

    // Read & store rates
    FILE *rate_file;
    double rate[NUM_RATES];
    rate_file = fopen(INPUT_FILE_RATES, "r");
    if(rate_file == NULL) {
        fprintf(stderr, "Error: Can't open file %s\n", INPUT_FILE_RATES);
        exit(1);
    }
    for(int r = 0; r < NUM_RATES; ++r) {
        fscanf(rate_file, "%lf", &rate[r]);
    }
    fclose(rate_file);

    // Check calls
    FILE *call_file = fopen(INPUT_FILE_CALLS, "r");
    if(call_file == NULL) {
        fprintf(stderr, "Error: Can't open file %s\n", INPUT_FILE_CALLS);
        exit(1);
    }

    // Let's roll
    char number[15 +1];
    DATE day;
    TIME start, end;
    char friend[1+1];
    int totCalls = 0;
    double totCost = 0.0;
    double totDiscount = 0.0;

    while(fscanf(call_file, "%s %2d/%2d/%4d %2d:%2d:%2d %2d:%2d:%2d %s", number, 
                    &day.d, &day.m, &day.y, 
                    &start.h, &start.m, &start.s, 
                    &end.h, &end.m, &end.s,
                    friend) != EOF) {

        if(strcmp(targetNumber, number)==0 && targetMonth==day.m) {
            double cost = CountTicks(start, end) * rate[TimeSlot(start)];
            double discount = 0.0;
            if(friend[0] == 'S')
                discount = cost / 2.0;

            ++totCalls;
            totDiscount += discount;
            totCost += cost - discount;
        }
    }
    fclose(call_file);
    printf("Phone bill: %.2lf\n", totCost);
    printf("Calls: %d\n", totCalls);
    printf("Discount: %.2lf\n", totDiscount);

    return EXIT_SUCCESS;
}

int CompareTime(TIME a, TIME b)
{
    if(a.h != b.h)
        return a.h - b.h;
    else if(a.m != b.m)
        return a.m - b.m;
    else
        return a.s - b.s;
}

int CountTicks(TIME a, TIME b)
{
    int d = (b.h - a.h)*60*60 + (b.m - a.m)*60 + (b.s - a.s);
    int ticks = d/30;
    if(d%30 > 0)
        ++ticks;
    //printf("%02d:%02d:%02d -> %02d:%02d:%02d = %d (%d ticks)\n", a.h, a.m, a.s, b.h, b.m, b.s, d, ticks);
    return ticks;
}

int TimeSlot(TIME t)
{
    TIME slot[NUM_RATES] = {
        { 5, 59, 59},
        {11, 59, 59},
        {18, 59, 59},
        {23, 59, 59}
    };
    int r = 0;
    while(CompareTime(t, slot[r]) > 0) {
        ++r;
    }
    return r;
}
