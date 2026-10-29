#include <stdio.h>

int main()
{
    int var = 7;

    printf("Value of the variable var is: %d\n", var);
    printf("Memory address of the variable var is: %p\n", (void *)&var);

    return 0;
}