
#include <stdio.h>
#include <ctype.h>

int main()
{
    if (ispunct('%'))
    {
        printf("Character %% is a punctuation\n");
    }

    if (ispunct('A'))
    {
        printf("Character A is a punctuation\n");
    }

    return 0;
}
