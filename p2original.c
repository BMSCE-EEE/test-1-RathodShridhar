#include<stdio.h>
int output(int a, int b);
int main()
{
  int a , b , sum;
  printf("ENTER THE VALUES OF a and b");
  scanf("%d %d", &a, &b);
  sum=output(a, b);
  printf("THE SUM IS %d", sum);
  return 0;
}
int output(int a, int b)
{ 
 int sum;
 sum=a+b;
return sum;
}