#include <stdio.h>
int main()
{
  int a = 10;
  int c = 0;
  printf("initial value of c = %d, a = %d \n",c,a);
  c = a++; // value of a = 10 is assigned to c and then incremented   
  printf("post increment (a++): value of c = %d, a = %d \n",c,a);
  printf("initial value of c = %d, a = %d \n",c,a);
  c = ++;
  printf("pre increment (++a): value of c = %d, a = %d\n",c,a);
  return 0;
}