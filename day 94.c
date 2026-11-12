#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    int rollno;
    char name[20];
    struct Date dob;
};

int main()
{
    struct Student s = {1, "Sravani", {6, 9, 2008}};

    printf("Roll No: %d\n", s.rollno);
    printf("Name: %s\n", s.name);
    printf("Date of Birth: %d-%d-%d\n",
           s.dob.day, s.dob.month, s.dob.year);

    return 0;
}