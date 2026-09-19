#include <stdio.h>
#include <ctype.h>

int main()
{
    if (isprint(';'))
    {
        printf("Character ; is here\n");
    }

    if (isprint('A'))
    {
        printf("Character A is here");
    }

    return 0;
}