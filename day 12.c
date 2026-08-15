#include <stdio.h>
int main()
{
  int a,b,c;
  printf("Enter the values for a,b and c:");
  scanf("%d %d %d", &a, &b, &c);
  /*check the boolean condition*/
  if(a == b)
  {
   /*if condition is true then check the following*/
   if(b == c)
   {
   /*if condition is true then printf the following*/
   printf("value of a,b and c are equal\n");
   }
  }
  return 0;
}