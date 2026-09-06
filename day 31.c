#include <stdio.h>
#include <conio.h>

void greaterNum(int a, int b);

int main()
{
    int i, j;

    printf("Enter 2 numbers that you want to compare: ");
    scanf("%d%d", &i, &j);

    greaterNum(i, j);

    getch();

    return 0;
}

void greaterNum(int x, int y)
{
    if(x > y)
    {
        printf("The greater number is: %d", x);
    }
    else
    {
        printf("The greater number is: %d", y);
    }
}