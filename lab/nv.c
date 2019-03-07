#include<stdio.h>
int input(int *a,int *b)
{
printf("enter the number:");
scanf("%d%d",a,b);
return 0;
}
int compute(int a,int b,int *min)
{
*min=a>b;
return *min;
}
void output(int a,int b)
{
if(a>b)
{
printf("b is smaller");
}
else
{
printf("a is smaller");
}
}
int main()
{
int a,b,min;
input(&a,&b);
compute(a,b,&min);
output(a,b);
return 0;
}
