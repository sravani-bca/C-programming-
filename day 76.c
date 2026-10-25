#include <stdio.h>
#include <conio.h>

int main()
{
    int a[1000], i, n, min, max, tot;
    float avg;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("Enter elements in array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    min = max = tot = a[0];

    for(i = 1; i < n; i++)
    {
        tot += a[i];

        if(min > a[i])
            min = a[i];

        if(max < a[i])
            max = a[i];
    }

    avg = (float)tot / n;

    printf("Minimum of array is: %d", min);
    printf("\nMaximum of array is: %d", max);
    printf("\nAverage of array is: %f", avg);

    getch();
    return 0;
}