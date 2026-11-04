#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, i, n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // malloc()
    ptr = (int*)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory not allocated");
        return 0;
    }

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("Elements are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }

    // realloc()
    ptr = (int*)realloc(ptr, (n + 2) * sizeof(int));

    // free()
    free(ptr);

    return 0;
}