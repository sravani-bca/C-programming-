#include <stdio.h>
#include <conio.h>

int addition(int a, int b)
{
    int r;
    r = a + b;
    return r;
}

int main()
{
    int z;

    z = addition(5, 3);

    printf("The result is %d", z);

    getch();
    return 0;
}