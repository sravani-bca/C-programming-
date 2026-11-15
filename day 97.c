#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
};

void show(struct Student st);

int main()
{
    struct Student std;

    printf("Enter Student name: ");
    scanf(" %49[^\n]", std.name);

    printf("Enter Student roll no: ");
    scanf("%d", &std.roll);

    show(std);

    return 0;
}

void show(struct Student st)
{
    printf("\nStudent name is %s", st.name);
    printf("\nRoll is %d", st.roll);
}