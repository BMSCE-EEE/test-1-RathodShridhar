#include<stdio.h>
int f()
{
  static int x=10;
  x=x+1;
  return 0; 
}

int main()
{
  int z,h;
  z=f();
  printf("%d",z);
  h=f();
  printf("%d",h);
  return 0;

}