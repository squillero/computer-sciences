#include <stdio.h>
#include <stdlib.h>

#define NUM 1000
#define MAX_INT 100

int main()
{
    int array[NUM];
    printf("%d random numbers 0-%d\n", NUM, MAX_INT);

    // magic line to initialize random generator
    // you may need to #include <stdlib.h>
    srand(time(NULL));

    for(int t = 0; t < NUM; ++t) {
        int r = rand() % (MAX_INT + 1);
        // printf(" %d", r);
        array[t] = r;
    }
    // printf("\n");

    // Size of the problem = NUM
    // Complexity NUM * NUM
    int most_common_element;
    int most_common_element_count = -1;
    int least_common_element;
    int least_common_element_count = NUM + 1;
    for(int i = 0; i < NUM; ++i) {
        int target = array[i];
        int count = 0;
        for(int t = 0; t < NUM; ++t) {
            if(array[t] == target) {
                ++count;
            }
        }
        if(count > most_common_element_count) {
            most_common_element = target;
            most_common_element_count = count;
            printf("Found %d %d's\n",
                   most_common_element_count, most_common_element);
        }
        if(count < least_common_element_count) {
            least_common_element = target;
            least_common_element_count = count;
            printf("Found %d %d's\n",
                   least_common_element_count, least_common_element);
        }
    }
    printf("Most common: %d (%d times)\n",
           most_common_element, most_common_element_count);
    printf("Least common: %d (%d times)\n",
           least_common_element, least_common_element_count);

    return 0;
}
