#include <stdio.h>
#include <conio.h>
#include <math.h>

main()
{
    int x;
    float y;

read:
    printf("Enter number to get its square root: ");
    scanf("%d", &x);

    if (x <= 0) goto read;

    y = sqrt(x);

    printf("Square root of %d is %.2f", x, y);

    getch();
    return 0;
}