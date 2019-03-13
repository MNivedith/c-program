#include<stdio.h>
void input(int *x,int *y,int *z)
{
 printf("enter the numbers");
 scanf("%d%d%d",x,y,z);
}
void compute(int x,int y ,int z,int *min)
{
 
 if(x<y)
 {
  if(x<z)
  {
   *min=x;
  }
  else
  {
   *min =z;
  }
 }
 if (y<x)
 {
  if(y<z)
  {
   *min=y;
  }
  else 
  {
   *min=z;
  }
 }
}
void output(int min)
{
 printf("min is %d",min);
}
int main()
{
 int x,y,z,min;
 input(&x,&y,&z);
 compute(x,y,z,&min);
 output(min);
 return 0;
}
