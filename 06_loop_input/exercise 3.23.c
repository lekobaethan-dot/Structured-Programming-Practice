#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter;
    int number;
    int largest;

    printf("Enter number 1: ");
    scanf("%d", &number);

    largest = number;

    for (counter = 2; counter <= 10; counter++)
    {
        printf("Enter number %d: ", counter);
        scanf("%d", &number);

        if (number > largest)
        {
            largest = number;
        }
    }

    printf("The largest number is %d\n", largest);

    return 0;
}
