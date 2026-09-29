#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int sum = 0;

    for (number = 1; number <= 100; number++)
    {
        if (number % 7 == 0)
        {
            sum = sum + number;
        }
    }

    printf("The sum of the multiples of 7 is %d\n", sum);

    return 0;
}
