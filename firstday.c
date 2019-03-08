#include<stdio.h>
int input(void)
{
int a;
printf("enter the number\n");
scanf("%d",&a);
return a;
}
int compute(int x)
{
x=x+6;
return x;
}
void output(int m,int n)
{
printf("%d+1 is %d",m,n);
}
int main(void)
{
int a=input();
int b=compute(a);
output(a,b);
}
