#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    int z;
    int result;

    printf("Enter three integers: ");
    scanf("%d %d %d", &x, &y, &z);

    result = x * y * z;

    printf("The product is %d\n", result);

    return 0;
}
