#include <stdio.h>
#include <conio.h>
int main()
{
int x, y, z;
printf("Enter the value for x:");
scanf("%d", &x);
printf("Enter the value for y:");
scanf("%d", &y);
printf("Enter the value for z:");
scanf("%d", &z);
if(x > y && x > z) // 0 is false, non-zero is true
 {
  printf("x is greater than y and z");
 }
 else if(y > z)
 {
  printf("y is greater than x and z");
 }
 else
 {
  printf("z is greater than x and y");
 }
getch();
return 0;
}