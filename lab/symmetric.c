#include<stdio.h>

void number(int* n)
{
 printf("Enter the no of rows/columns: ");
 scanf("%d",n);
}

void input(int n,int x[n][n])
{
 printf("Enter the elements \n");
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
  {
   scanf("%d",&x[i][j]);
  }
 }
}

int transpose(int n,int x[n][n])
{
 int y[n][n],flag=0;
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
  {
   y[j][i]=x[i][j];
  }
 }
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
  {
   if(x[i][j]!=y[i][j])
   {
    flag=1;
   }
  }
 }
 return flag;
}

void output(int flag)
{
 if(flag!=1)
 {
  printf("The matrix is symetric ");
 }
 else
 {
  printf("The matrix is not symetric");
 }
}

int main()
{
 int n;
 number(&n);
 int x[n][n],flag;
 input(n,x);
 flag=transpose(n,x);
 output(flag);
 return 0;
}
