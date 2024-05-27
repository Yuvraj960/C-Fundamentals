// To input ages and print average of ages 

#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter Age:");
        scanf("%d", &arr[i]);
    }
    int summ=0;
    for (int i = 0; i < 10; i++)
    {
        summ += arr[i];
    }
    int avg = summ/10;
    printf("average of ages: %d", avg);
    
    return 0;
}
