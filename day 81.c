
#include <stdio.h>

int main()
{
    int i = 10;
    int *ptr;

    // Store address of variable i in pointer ptr
    ptr = &i;

    // Display address of variable i
    printf("Address of variable i is %p\n", (void*)ptr);

    // Display value stored at the address
    printf("Value at the address, stored in pointer variable ptr is %d", *ptr);

    return 0;
}
