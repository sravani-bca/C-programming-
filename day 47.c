#include <stdio.h>
#include <conio.h>
#include <time.h>

int main(void)
{
    time_t time_raw_format;
    struct tm *ptr_time;

    time(&time_raw_format);
    ptr_time = localtime(&time_raw_format);

    printf("Current local time and date: %s", asctime(ptr_time));

    getch();
    return 0;
}