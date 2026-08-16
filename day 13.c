#include <stdio.h>
int main()
{
  int a, b, c;
  printf("enter three numbers:");
  scanf("%d %d %d", &a, &b, &c);
  if(a > b)
  {
   if(a > c)
    printf("largest value is %d\n",a);
   else
    printf("largest value is %d\n",c);
  }
  else
  { 
   if(c > b)
    printf("largest value is %d\n",c);
   else
    printf("Larger value is %d\n",b);
  }
  return 0;
}