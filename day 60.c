#include <stdio.h>

#define height 100

int main()
{
    printf("First defined value for height: %d\n", height);

    #undef height
    #define height 600

    printf("Value of height after undef & redefine: %d\n", height);

    return 0;
}