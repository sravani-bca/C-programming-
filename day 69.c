
#include <stdio.h>
#include <conio.h>

void main()
{
    int result;
    int addition();  // Function declaration

    clrscr();

    result = addition();  // Calling function

    printf("Sum = %d", result);

    getch();
}

int addition()  // Called function
{
    int num1, num2;

    num1 = 15;
    num2 = 26;

    return (num1 + num2);
}
