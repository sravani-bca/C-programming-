#include<stdio.h>
#include<conio.h>

float findAverage(int marks[])
{
    int i;
    float avg, sum = 0;

    for(i = 0; i <= 4; i++)
    {
        sum += marks[i];
    }

    avg = sum / 5;
    return avg;
}

int main()
{
    float avg;
    int marks[] = {99, 90, 96, 93, 95};

    avg = findAverage(marks);

    printf("Average marks = %.1f", avg);

    getch();
    return 0;
}