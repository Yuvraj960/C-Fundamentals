#include <stdio.h>
#include <math.h>

int main()
{
    int n =10;
    int base;
    int expo;
    int res;
    int i;
    printf("The 1st series is: 2^n\n");
    for (int expo = 1; expo <= n; expo++)
    {
        i = 2;
        res = pow(i, expo);
        printf("%d ", res);
    }
    printf("\n");
    printf("\nThe 2nd series is: (2^n) + 2\n");
    for (int expo = 1; expo <= n; expo++)
    {
        i = 2;
        res = (pow(i, expo) + 2);
        printf("%d ", res);
    }
    printf("\n");
    printf("\nThe 3rd series is: x^2\n");
    for (int expo = 1; expo <= n; expo++)
    {
        i = 2;
        res = pow(expo, i);
        printf("%d ", res);
    }
    return 0;
}