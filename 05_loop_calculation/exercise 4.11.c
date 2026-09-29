#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("N\tN2\tN3\tN4\n");

    for (n = 1; n <= 10; n++)
    {
        printf("%d\t%d\t%d\t%d\n",
               n,
               n * n,
               n * n * n,
               n * n * n * n);
    }

    return 0;
}
