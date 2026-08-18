#include <stdio.h>

int main()
{
    int number, temp, factor = 1, num;

    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;
    num = number;

    while (temp)
    {
        temp = temp / 10;
        factor = factor * 10;
    }

    printf("Each digit of given number are: ");

    while (factor > 1)
    {
        factor = factor / 10;
        printf("%d ", num / factor);
        num = num % factor;
    }

    return 0;
}