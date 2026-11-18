#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;
    char data[50];
    int length;

    printf("Opening the file file1.txt in write mode...\n");

    fp = fopen("file1.txt", "w");

    if(fp == NULL)
    {
        printf("Could not open file1.txt");
        return 1;
    }

    printf("Enter text: ");
    fgets(data, sizeof(data), stdin);

    length = strlen(data);

    if(length > 0)
    {
        fputs(data, fp);
    }

    printf("Closing the file test.c");

    fclose(fp);

    return 0;
}