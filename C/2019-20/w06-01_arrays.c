/********************************************************************-*-c-*-*\
*               *  Code example for Computer Sciences 2019-20                *
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
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE  8192

int main()
{
    int array[ARRAY_SIZE];
    int array_size;
    int max_value;

    printf("Array size: ");
    scanf("%d", &array_size);
    printf("Max value: ");
    scanf("%d", &max_value);

    // initialization
    srand(time(NULL));
    for(int t = 0; t < array_size; ++t) {
        array[t] = rand() % max_value + 1;
    }
    printf("ARRAY:");
    for(int t = 0; t < array_size; ++t) {
        printf(" %d", array[t]);
    }
    printf("\n");

    int all_unique_elements = 1;
    for(int u = 0; u < array_size; ++u) {
        // look for element u
        int target = array[u];
        int counter = 0;     // counter
        // int at_least_one = 0;   // a flag! much better
        for(int t = 0; t < array_size; ++t) {
            if(array[t] == target) {
                counter += 1;
            }
            // if(array[t] == target) { at_least_one = 1; }
        }
        if(counter > 1) {
            all_unique_elements = 0;
            printf("Found %d in array (%d times)\n", target, counter);
        }
        // if(at_least_one != 0) { printf("Found %d in array!\n", target); }
    }
    if(all_unique_elements == 1) {
        printf("Whoa! The array does not contain duplicated elements!!!\n");
    }

    return 0;
}
