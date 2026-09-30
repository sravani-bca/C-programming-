#include <stdio.h>
#include <conio.h>

void giveMeArray(int a);

int main()
{
    int myArray[] = {2, 3, 4};

    giveMeArray(myArray[2]);

    getch();
    return 0;
}

void giveMeArray(int a)
{
    printf("Array element value is %d", a);
}