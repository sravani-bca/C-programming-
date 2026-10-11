#include <stdio.h>
#include <conio.h>

int main()
{
    char str[50];

    printf("Enter your name: ");
    gets(str);

    printf("The string is: ");
    puts(str);

    getch();
    return 0;
}