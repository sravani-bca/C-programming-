#include <stdio.h>
int main()
{
  float avg;
  printf("Enter average marks:")
  scanf("%f",&avg);
  if(avg >= 60) /* if condition is true, then statement after if is executed*/
  {
    printf("you have got first class");
  }
  return 0;
}
 