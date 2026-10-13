#include <stdio.h>
#include <conio.h>

void main()
{
    int array[] = {10, 20, 30, 40, 50};
    int i, n = 5;

    printf("The array elements are:\n");

    for(i = 0; i < n; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }
}
