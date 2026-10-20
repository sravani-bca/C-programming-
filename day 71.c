#include <stdio.h>

int main()
{
    int i, n;
    int a[50], large, small;

    printf("Number of elements: ");
    scanf("%d", &n);

    printf("\nEnter values for %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    large = a[0];
    small = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] > large)
            large = a[i];

        if (a[i] < small)
            small = a[i];
    }

    printf("\nLargest element is %d", large);
    printf("\nSmallest element is %d", small);

    return 0;
}

