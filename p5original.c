#include<stdio.h>
int cmp(int a, int b, int c,int *large);
int main()
{ int a,b,c,large;
  printf("enter hte values for a , b, c");
  scanf("%d%d%d",&a,&b,&c);
  cmp(a, b,  c,&large);
printf("the largest no is %d",large);

}
 int cmp(int a, int b, int c,int *large)
{
  if(a>b)
  {if(a>c)
    *large=a;
  else
  *large=c;
  }
  else if (b>c)
  {
   *large=b;
  }
  else
    {
    *large=c;
  }
}