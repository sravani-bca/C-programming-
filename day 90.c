/* String.c - String Variable */

#include <stdio.h>
#include <conio.h>

int main()
{
    char month[15];

    printf("Enter the string: ");
    gets(month);

    printf("The string entered is %s", month);

    getch();
    return 0;
}