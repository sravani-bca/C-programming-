#include <stdio.h>
#include <conio.h>
int main()
{
int x=5, y=2, result;
result= x + y;
printf("Addition-result is:%d\n",result);

result= x - y;
printf("Substraction-result is:%d\n",result);

result= x * y;
printf("Multiplication-result is:%d\n",result);

result= x / y;
printf("Division-result is:%d\n",result);

result= x % y;
printf("Modulus-result is:%d\n",result);

getch();
return 0;
}
