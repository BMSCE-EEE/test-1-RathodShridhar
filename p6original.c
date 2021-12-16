#include<stdio.h>
int sumn (int n);
int output(int n);
int main()
{ int a,b,n,sum;
printf("enter the value for n");
scanf("%d",&n);
a=sumn(n);
b=output(n);
}
int sumn(int n)
{ int a;
  a=(n*(n+1))/2 ;
  return a;
}
int output(int n)
{
  int b;
  printf("sum = %d",b);
}