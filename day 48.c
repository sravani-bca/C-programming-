#include <stdio.h>
#include <conio.h>
#include <time.h>

int main(void)
{
    time_t time_raw_format;
    struct tm *time_struct;
    char buf[100];

    time(&time_raw_format);

    time_struct = localtime(&time_raw_format);

    strftime(buf, 100, "It is now: %x - %I:%M%p", time_struct);

    puts(buf);

    getch();
    return 0;
}