#include <stdio.h>

void display(int arr[], int size)
{
    int i;

    printf("Array elements are:\n");

    for(i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    display(arr, 5);

    return 0;
}