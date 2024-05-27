//To search an element in the array

#include <stdio.h>
#include <conio.h>

int main()
{
    int a[] = {10, 20, 30, 33, 44, 10};
    int i;
    int searchEle = 33;

    for ( i = 0; i < 6; i++)
    {
        if (a[i] == searchEle)
        {
            printf("Element found at index %d", i);
            break;
        }
    }
    
    return 0;
}
