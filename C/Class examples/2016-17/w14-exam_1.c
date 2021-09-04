/********************************************************************-*-c-*-*\
*               *  Code examples for Computer Sciences 2016-17               *
*    #####      *  (!) Giovanni Squillero <giovanni.squillero@polito.it>     *
*   ######      *                                                            *
*   ###   \     *  Copying and distribution of this file, with or without    *
*    ##G  c\    *  modification, are permitted in any medium without royalty *
*    #     _\   *  provided this notice is preserved.                        *
*    |   _/     *  This file is offered as-is, without any warranty.         *
*    |  _/      *                                                            *
*               *  See: http://staff.polito.it/giovanni.squillero/dida.php   *
\****************************************************************************/

#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

#define NAME_LEN 20
#define MAX_LINE 256

struct _DATE {
    int d, m, y;
};
typedef struct _DATE DATE;

/* FOR THE BRAVEST

typedef struct _DATE {
    int d, m, y;
} DATE;

*/

struct _GOOD {
    char name[NAME_LEN +1];
    DATE last_op;
    int tot_load;
    double tot_income;
};
typedef struct _GOOD GOOD;

// PROTOS
int date_cmp(DATE d1, DATE d2);

int main(int argc, char *argv[])
{
    GOOD selected_good;

    if(argc != 2) {
        fprintf(stderr, "One argument is required!\n");
        exit(EXIT_FAILURE);
    }
    FILE *input = fopen(argv[1], "r");
    if(input == NULL) {
        fprintf(stderr, "Can't open file \"%s\"\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    printf("Insert name of goods: ");
    scanf("%s", selected_good.name);
    selected_good.tot_load = 0;
    selected_good.tot_income = 0.0;
    selected_good.last_op.d = selected_good.last_op.m = selected_good.last_op.y = 1;

    char line[MAX_LINE];
    while(fgets(line, MAX_LINE, input) != NULL) {
        char name[NAME_LEN +1];
        DATE dop;
        int qty;
        sscanf(line, "%s %2d-%2d-%4d %d",
               name, &dop.d, &dop.m, &dop.y, &qty);
        if(strcmp(name, selected_good.name) == 0) {
            if(qty > 0) {
                selected_good.tot_load += qty;
                selected_good.tot_income += 10.0 + 0.01 * qty;
                if(date_cmp(selected_good.last_op, dop) < 0) {
                    selected_good.last_op = dop;
                }
            }
        }
    }
    fclose(input);

    printf("Total quintals of loaded %s: %.2f\n",
           selected_good.name, selected_good.tot_load / 100.0);
    printf("Date of last loading op: %02d-%02d-%04d\n",
           selected_good.last_op.d, selected_good.last_op.m, selected_good.last_op.y);
    printf("Total income: %g EUR\n", selected_good.tot_income);

    return EXIT_SUCCESS;
}

int date_cmp(DATE d1, DATE d2)
{
    if(d1.y != d2.y) {
        return d1.y - d2.y;
    } else if(d1.m != d2.m) {
        return d1.m - d2.m;
    } else {
        return d1.d - d2.d;
    }
}
