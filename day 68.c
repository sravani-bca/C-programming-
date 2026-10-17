
#include <stdio.h>

void addition(int, int);  // Function declaration

int main()
{
    int num1, num2;

    num1 = 10;
    num2 = 20;

    printf("\nBefore addition: num1 = %d, num2 = %d",
           num1, num2);

    addition(num1, num2);  // Calling function

    return 0;
}

void addition(int a, int b)  // Called function
{
    printf("\nSUM = %d", a + b);
}
