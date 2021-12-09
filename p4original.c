#include<stdio.h>
void cmp(int a,int b,int c);
int main()

{
  int a ,b,c, large;
  printf("enter the value of a,b,c");
  scanf("%d%d%d",&a,&b,&c);
  cmp(a,b,c);

}
void cmp(int a,int b,int c)
{
  
  if(a>b)
  {if(a>c)
   printf(" %dis the largest",a);
  else
  printf("%d is the largest",c);
  }
  else if (b>c)
  {
    printf("%d is the largest",b);
  }
  else
    {
    printf("%d is the largest",c);
  }
}