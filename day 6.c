#include <stdio.h>
int main()
{
  int x, y, larger;
  printf("Enter two numbers:");
  scanf("%d %d", &x, &y);
  larger = (x > y) ? x : y;
  printf("larger number is : %d", larger);
  return 0;
}
