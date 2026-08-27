#include <stdio.h>

int main(void)
{
    for (int n = 5; n > 0; n--)
    {
        if (n == 3)
            continue;

        printf("%d, ", n);
    }

    printf("FIRE!");

    return 0;
}