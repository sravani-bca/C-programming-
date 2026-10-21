
#include <stdio.h>
#include <conio.h>

void main()
{
    int arr[5];
    int req;
    int location = -5;

    printf("Enter 5 numbers to store in array: ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number you want to find: ");
    scanf("%d", &req);

    for (int w = 0; w < 5; w++)
    {
        if (arr[w] == req)
        {
            location = w;
            break;
        }
    }

    if (location != -5)
    {
        printf("The number %d is found at location: %d",
               req, location + 1);
    }
    else
    {
        printf("The number is not found");
    }

    getch();
}
