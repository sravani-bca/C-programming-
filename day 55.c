#include <stdio.h>

void func(void);

static int count = 10;

int main()
{
    while (count--)
    {
        func();
    }

    return 0;
}

void func(void)
{
    static int i = 5;

    printf("i is %d and count is %d\n", ++i, count);
}