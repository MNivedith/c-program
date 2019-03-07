#include<stdio.h>
int input(int *a,int *b)
{
printf("enter the number:");
scanf("%d%d",a,b);
return 0;
}
int compute(int a,int b, int *sum)
{
*sum=a+b;
return *sum;
}
void output(int sum)
{
printf("the sum is%d",sum);
}
int main()
{
int a,b,sum;
input(&a,&b);
compute(a,b,&sum);
output(sum);
return 0;
}
