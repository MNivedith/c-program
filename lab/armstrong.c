#include<stdio.h>
void input(int *num)
{
 printf("enter the number:");
 scanf("%d",num);
}
void compute(int num,int *sum)
{
 int r;
 while(num!=0)
 {
  r=num%10;
  *sum=*sum+(r*r*r);
  num=num/10;
 }
}
void output(int num,int sum)
{
 if(num==sum)
 {
  printf("the number is armstrong %d",num);
  }
  else
  {
   printf("the number is not armstrong %d",num);
 }
}
int main()
{
 int num,sum;
 input(&num);
 compute(num,&sum);
 output(num,sum);
 return 0;
}
