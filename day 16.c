#include <stdio.h>

int main()
{
    int choice;

    printf("Enter a number (1-3): ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Apple");
            break;

        case 2:
            printf("Banana");
            break;

        case 3:
            printf("Mango");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}