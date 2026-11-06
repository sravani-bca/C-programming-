#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int (*ptr)(int, int);

    int x = 10, y = 20, result;

    ptr = add;

    result = ptr(x, y);

    printf("First number = %d\n", x);
    printf("Second number = %d\n", y);
    printf("Sum = %d\n", result);

    return 0;
}