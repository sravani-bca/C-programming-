#include <stdio.h>

int main()
{
    int a = 10;
    int *p;

    p = &a;

    printf("Size of integer: %zu bytes\n", sizeof(a));
    printf("Size of pointer: %zu bytes\n", sizeof(p));
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", (void *)&a);
    printf("Pointer value: %p\n", (void *)p);

    return 0;
}