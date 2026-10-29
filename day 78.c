
#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];

    printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("Enter elements in array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nThe array elements in reverse order:\n");

    for(i = n - 1; i >= 0; i--)
    {
        if(i == 0)
            printf("%d", arr[i]);
        else
            printf("%d, ", arr[i]);
    }

    printf("\n");
    return 0;
}
