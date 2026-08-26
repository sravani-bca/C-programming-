#include <stdio.h>

int main()
{
    int sum, i, n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    sum = 0;
    i = 1;

    do
    {
        sum = sum + i;
        i++;
    } while (i <= n);

    printf("Sum of first %d numbers is %d", n, sum);

    return 0;
}