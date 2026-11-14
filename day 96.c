
#include <stdio.h>

struct Employee
{
    char ename[20];
    int sal;
};

struct Employee emp[5];

void ask()
{
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("\nEnter %d Employee record:", i+1);

        printf("\nEmployee name: ");
        scanf("%19s", emp[i].ename);

        printf("Enter Salary: ");
        scanf("%d", &emp[i].sal);
    }

    printf("\nDisplaying Employee records...\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nEmployee name is %s", emp[i].ename);
        printf("\nSalary is %d\n", emp[i].sal);
    }
}

int main()
{
    ask();
    return 0;
}
