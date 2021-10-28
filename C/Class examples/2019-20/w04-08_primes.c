// Copyright © 2019-2020 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int number = 2; number < 1000; number = number + 1)
    {
        // check if prime
        int factors = 0;
        for (int n = 2; n < number; n = n + 1)
        {
            if (number % n == 0)
            {
                factors = factors + 1;
            }
        }
        if (factors == 0)
        {
            printf("%d ", number);
        }
    }

    return 0;
}
