#include <stdio.h>
int main()
{
  int number,i,sum = 0;
  printf("enter values for 10 numbers:");
  for(i=0;i<10;i++)
  {
   scanf("%d",&number);
   sum = sum + number;
  }
  printf("sum is %d",sum");
  return 0;
}
