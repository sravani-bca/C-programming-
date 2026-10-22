
#include <stdio.h>

int binarySearch(int arr[], int num, int element);

int main()
{
    int num, arrElements[100], element, result;
    int i;

    printf("How Many Elements: ");
    scanf("%d", &num);

    printf("Enter Elements of Array in Ascending order: ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arrElements[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &element);

    result = binarySearch(arrElements, num, element);

    if (result != -1)
        printf("Element found at position %d", result + 1);
    else
        printf("Element is not found!");

    return 0;
}

int binarySearch(int arrElements[], int num, int element)
{
    int first, last, mid;

    first = 0;
    last = num - 1;

    while (first <= last)
    {
        mid = (first + last) / 2;

        if (element == arrElements[mid])
            return mid;
        else if (element > arrElements[mid])
            first = mid + 1;
        else
            last = mid - 1;
    }

    return -1;
}
