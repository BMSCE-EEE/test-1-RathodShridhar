#include<stdio.h>
int input(int a);
int input(int b);
void add(int a, int b, int *sum);
void output(int a, int b, int sum);
int main()
{
  int a, b , sum;
  a=input(a);
  b=input(b);
  add( a,  b, &sum);
  output( a,  b,  sum);
}
int input(int a)
{
  int d;
  printf("enter the value "); 
  scanf("%d",&d);
  return d;

}
void add(int a, int b, int *sum)
{
*sum=a+b;
}
 void output(int a, int b, int sum)
{
  printf("the sum =%d",sum);
}