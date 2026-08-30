#include <stdio.h>

int main()
{
    int number;
    int prime = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 2; i < number; i++)
    {
        if ((number % i) == 0)
        {
            prime = 0;
        }
    }

    if (prime == 1)
        printf("%d is prime number", number);
    else
        printf("%d is not a prime number", number);

    return 0;
}