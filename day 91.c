
#include <stdio.h>
#include <string.h>

int main()
{
    char car[5][20] = {
        "Mahindra",
        "Audi",
        "Lamborghini",
        "Hyundai",
        "Tata Motors"
    };

    for(int itemNumber = 0; itemNumber < 5; itemNumber++)
    {
        for(int characterPosition = 0;
            characterPosition < strlen(car[itemNumber]);
            characterPosition++)
        {
            printf("%c", car[itemNumber][characterPosition]);
        }

        printf("\n");
    }

    return 0;
}
