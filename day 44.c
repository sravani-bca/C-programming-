#include <stdio.h>
#include <conio.h>
#include <time.h>

int main()
{
    time_t time_raw_format;
    struct tm *ptr_time;

    time(&time_raw_format);
    ptr_time = localtime(&time_raw_format);

    printf("The current date and time is: %s", asctime(ptr_time));

    getch();
    return 0;
}