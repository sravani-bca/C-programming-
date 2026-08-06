#include <stdio.h>
int main()
{
  float x = 5, y = 2;
  int A = 5, B = 2;
  printf("initial value x = %.0f, y = %.0f\n",x, y);
  x = y; // assign the value of y to x
  printf("After x = y: x = %.0f\n",x);
  x = 5; // reassign initial value 5
  x += y;
  printf("After x += y: x = %.0f\n",x);
  x = 5; // reassign initial value 5
  x -= y;
  printf("After x -= y: x = %.0f\n",x);
  x = 5; // reassign initial value 5
  x *= y;
  printf("After x -= y: x = %.0f\n",x);
  x = 5; // reassign initial value 5 
  x /= y;
  printf("After x /= y: x = %.0f\n",x);
  printf("\nmodulus operator will work only with                           
  integers \n");
  A = 5; // assign initial value 5
  B = 2; // assign initial value 5
  printf("initial value A = %d, B = %d \n",A, B);
  A %= B;
  printf("After A %%= B: A = %d \n",A);
  return 0;
}
  
