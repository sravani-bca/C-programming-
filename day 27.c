#include <stdio.h>

int main()
{
    int n, digit, sum = 0;

    printf("Enter a Number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    if(sum == 1)
        printf("Magic Number");
    else
        printf("Not a Magic Number");

    return 0;
}