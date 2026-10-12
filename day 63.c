#include <stdio.h>

int main()
{
    int arrNum[5];
    int i;

    printf("Enter five numbers...\n");

    for (i = 0; i < 5; i++)
    {
        printf("Enter value for number %d: ", i + 1);
        scanf("%d", &arrNum[i]);
    }

    printf("\nEntered numbers are: ");

    for (i = 0; i < 5; i++)
    {
        printf("%d, ", arrNum[i]);
    }

    return 0;
}

