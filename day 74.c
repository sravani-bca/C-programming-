
#include <stdio.h>
#include <conio.h>

void main()
{
    int arrElement[50], num, i, j, temp;

    printf("Enter the size of array: ");
    scanf("%d", &num);

    printf("Enter %d integer values: ", num);

    for (i = 0; i < num; ++i)
    {
        scanf("%d", &arrElement[i]);
    }

    for (i = 1; i < num; ++i)
    {
        for (j = 0; j < num - i; ++j)
        {
            if (arrElement[j] > arrElement[j + 1])
            {
                temp = arrElement[j];
                arrElement[j] = arrElement[j + 1];
                arrElement[j + 1] = temp;
            }
        }
    }

    printf("Array after bubble sort: ");

    for (i = 0; i < num; ++i)
    {
        printf("%d ", arrElement[i]);
    }

    getch();
}
