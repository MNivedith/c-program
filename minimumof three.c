#include<stdio.h>
int input(int *a,int *b,int *c)
{
printf("enter the number:");
scanf("%d%d%d",a,b,c);
return 0;
}
int compute(int a,int b,int c,int *min)
{
*min=a<b;
*min=a<c;
return *min;
}
void output(int a,int b,int c)
{
if(a<b&&a<c)
{
printf("%d is smallest",a);
}
else if(b<c)
{
printf("%d is the smallest",b);
}
else
{
printf("%d is the smallest",c);
}
}
int main()
{
int a,b,c,min;
input(&a,&b,&c);
compute(a,b,c,&min);
output(a,b,c);
return 0;
}
