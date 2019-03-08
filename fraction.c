#include<stdio.h>
struct fraction
{
 int num,dem;
};
 int input(struct fraction *fr1,struct fraction *fr2)
{
 printf("enter the first number:");
 printf("enter the num:");
 scanf("%d",&fr1->num);
 printf("enter the dem:");
 scanf("%d",&fr1->dem);
 printf("enter the second number:");
 printf("enter the num:");
 scanf("%d",&fr2->num);
 printf("enter the dem:");
 scanf("%d",&fr2->dem);
return 0;
}
int compute(struct fraction fr1,struct fraction fr2,int *s1,int *s2)
{
 *s1=(fr1.num*fr2.dem+fr2.num*fr1.dem);
 *s2=(fr1.dem*fr2.dem);
 return 0;
}
void output(int s1,int s2)
{
 printf("s1 %d",s1);
 printf("s2 %d",s2);
}
int main()
{
 int  s1,s2;
 struct fraction fr1,fr2;
 input(&fr1,&fr2);
 compute(fr1,fr2,&s1,&s2);
 output(s1,s2);
 return 0;
}
