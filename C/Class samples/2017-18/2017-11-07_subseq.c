#include <stdio.h>
#include <stdlib.h>

#define NUM 100
#define MAX_INT 5

#define SUB_SEQ_LEN 2

int main()
{
    int array[NUM];
    int sub_squence[SUB_SEQ_LEN] = {0, 3};
    printf("%d random numbers 0-%d:", NUM, MAX_INT);

    // magic line to initialize random generator
    // you may need to #include <stdlib.h>
    srand(time(NULL));

    for(int t = 0; t < NUM; ++t) {
        int r = rand() % (MAX_INT + 1);
        printf(" %d", r);
        array[t] = r;
    }
    printf("\n");

    for(int i1 = 0; i1 < NUM; ++i1) {
        int flag = 1;
        for(int i2 = 0; i2 < SUB_SEQ_LEN; ++i2) {
            if(array[i1 + i2] != sub_squence[i2]) {
                flag = 0;
            }
        }
        if(flag == 1) {
            printf("Sub sequence found at position %d-%d\n", i1, i1+SUB_SEQ_LEN-1);
        }
    }


    return 0;
}
