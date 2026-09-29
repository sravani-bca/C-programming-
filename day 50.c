#include <stdio.h>
#include <conio.h>
#include <time.h>

int main()
{
    time_t in_seconds;

    in_seconds = time(NULL);

    printf("%d seconds since January 1, 1970, EPOCH time!", in_seconds);

    getch();

    return 0;
}