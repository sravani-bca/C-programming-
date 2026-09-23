#include <stdio.h>
#include <conio.h>
#include <time.h>

int main()
{
    time_t time_raw_format;

    time(&time_raw_format);

    printf("The current local time: %s", ctime(&time_raw_format));

    getch();

    return 0;
}