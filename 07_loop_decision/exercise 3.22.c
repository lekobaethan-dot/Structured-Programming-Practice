#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int divisor;
    int prime = 1;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number <= 1)
    {
        prime = 0;
    }
    else
    {
        for (divisor = 2; divisor < number; divisor++)
        {
            if (number % divisor == 0)
            {
                prime = 0;
                break;
            }
        }
    }

    if (prime == 1)
    {
        printf("%d is a prime number.\n", number);
    }
    else
    {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
