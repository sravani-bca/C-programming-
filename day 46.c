#include <stdio.h>
#include <conio.h>
#include <time.h>

int main(void)
{
    time_t time_raw_format;

    time(&time_raw_format);

    printf("Coordinated Universal Time is %s",
           asctime(gmtime(&time_raw_format)));

    getch();

    return 0;
}