
#include <stdio.h>
#include <ctype.h>

int main()
{
    if (!isalnum(';'))
    {
        printf("Character ; is not alphanumeric\n");
    }

    if (isalnum('A'))
    {
        printf("Character A is alphanumeric\n");
    }

    return 0;
}
