#include <stdio.h>

int main()
{
    int a, *p;

    a = 10;
    p = &a;

    printf("Value of a = %d\n", *p);
    printf("Value of a = %d\n", *(&a));

    printf("Address of a = %p\n", (void*)&a);
    printf("Address stored in p = %p\n", (void*)p);
    printf("Address of p = %p\n", (void*)&p);

    return 0;
}