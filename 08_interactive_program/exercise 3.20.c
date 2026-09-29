#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours;
    float rate;
    float salary;

    printf("Enter number of hours worked (-1 to end): ");
    scanf("%d", &hours);

    while (hours != -1)
    {
        printf("Enter hourly rate: ");
        scanf("%f", &rate);

        if (hours <= 40)
        {
            salary = hours * rate;
        }
        else
        {
            salary = (40 * rate) + ((hours - 40) * rate * 1.5);
        }

        printf("Salary is $%.2f\n", salary);

        printf("\nEnter number of hours worked (-1 to end): ");
        scanf("%d", &hours);
    }

    printf("Program ended.\n");

    return 0;
}
