#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct foo {
        char foo, bar;
        int x;
    };

    printf("%d\n", sizeof (char) + sizeof (char) + sizeof (int));
    printf("%d\n", sizeof (struct foo));
    return 0;
}
