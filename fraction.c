#include<stdio.h>
struct fraction
{
 int num,dem;
};
 void input(struct fraction *fr1,struct fraction *fr2)
{
 printf("enter the first number:");
 printf("enter the num and dem:");
 scanf("%d%d",&fr1->num,&fr2->dem);
 printf("enter the second number:");
 printf("enter the num and dem:");
 scanf("%d%d",&fr2->num,&fr1->dem);
}
struct fraction compute(struct fraction fr1,struct fraction fr2,int *s1,int *s2)
{
 *s1=(fr1.num*fr2.dem+fr2.num*fr1.dem);
 *s2=(fr1.dem*fr2.dem);
};
void output(int s1,int s2)
{
 printf("s1 and s2 %d+%d",s1,s2);
}
void main()
{
 int  s1,s2;
 struct fraction fr1,fr2;
 input(&fr1,&fr2);
 compute(fr1,fr2,&s1,&s2);
 output(s1,s2);
}
