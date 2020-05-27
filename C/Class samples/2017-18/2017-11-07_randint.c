#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int MAX = 5;
    int MIN = -5;
    for(int t = 0; t < 100; ++t) {
        int r = (rand() % (MAX-MIN+1)) + MIN;
        printf("\"Random\" number [-5, +5]: %d\n", r);
    }
    return 0;
}
