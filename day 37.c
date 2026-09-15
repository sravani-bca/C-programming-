#include<stdio.h>
#include<conio.h>

void main()
{
    int num1, num2, result;

    int addition(int, int);

    clrscr();

    num1 = 10;
    num2 = 20;

    result = addition(num1, num2); 

    printf("Sum = %d", result);

    getch();
}

int addition(int a, int b)
{
    return(a + b);
}