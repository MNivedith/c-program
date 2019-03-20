#include<stdio.h>
int input()
{
 int n;
 printf("enter the number:");
 scanf("%d",&n);
 return n;
 
}
void grade(int n,char s[])
{
 if(n>=95)
 {
  s="A+";
 }
 else
 if(n>=85)
 {
 s="A";
 }
 else
 if(n>=75)
 {
  s="B+";
 }
 if(n>=65)
 {
 s="B";
 }
 if(n>=45)
 {
 s="c+";
 }
 if(n>=35)
 {
 s="c";
 }
 if(n<=20)
 {
 s="fail";
 }
 printf("%s",s);
}
int main()
{
 char s[6];
 int n=input();
 grade(n,s);
 return 0;
}

  
 
