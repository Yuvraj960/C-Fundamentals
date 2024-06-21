#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter the number upto which you want to print prime no.: ");
    scanf("%d", &n);
    // n = 10;
    for (i = 2; i <= n; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}