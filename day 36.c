#include<stdio.h>
#include<conio.h>

void main()
{
    int result;

    int addition();  // function declaration

    clrscr();

    result = addition();  // calling function

    printf("Sum = %d", result);

    getch();
}

int addition()  // called function
{
    int num1, num2;

    num1 = 10;
    num2 = 20;

    return(num1 + num2);
}