#include <stdio.h>
#include <conio.h>

int main()
{
    if (isgraph('9'))
    {
        printf("Character 9 is a graph");
    }

    if (isgraph('A'))
    {
        printf("\nCharacter A is graph");
    }

    getch();
    return 0;
}