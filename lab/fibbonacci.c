#include<stdio.h>
void input(int *n)
{
 printf("enter the number:");
 scanf("%d",n);
}
void compute(int n)
{
 int i,t1=0,t2=1,nextterm;
 printf("fibbonacci series:");
 for(i=0;i<n;i++)
 {
  printf("%d\n",t1);
  nextterm=t1+t2;
  t1=t2;
  t2=nextterm;
 }
}
int main()
{
 int n;
 input(&n);
 compute(n);
 return 0;
}
