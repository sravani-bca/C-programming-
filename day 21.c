#include <stdio.h>

int main()
{
    int num, result;
    int count = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (count <= 10)
    {
        result = num * count;
        printf("%d * %d = %d\n", num, count, result);
        count = count + 1;
    }

    return 0;
}