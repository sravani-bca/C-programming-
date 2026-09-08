#include <stdio.h>
#include <conio.h>

int multiply(int a, int b);

int main()
{
    int i, j, result;

    printf("Enter 2 numbers you want to multiply: ");
    scanf("%d%d", &i, &j);

    result = multiply(i, j);

    printf("The result of multiplication is: %d", result);

    getch();
    return 0;
}

int multiply(int a, int b)
{
    return (a * b);
}