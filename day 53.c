#include <stdio.h>
#include <conio.h>

void displayArray(int arr[3][3])
{
    int i, j;

    printf("The complete array is:\n");

    for (i = 0; i < 3; ++i)
    {
        printf("\n");

        for (j = 0; j < 3; ++j)
        {
            printf("%d\t", arr[i][j]);
        }
    }
}

int main()
{
    int arr[3][3], i, j;

    printf("Please enter 9 numbers for the array: ");

    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Passing the array as argument
    displayArray(arr);

    getch();
    return 0;
}