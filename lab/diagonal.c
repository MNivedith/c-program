#include<stdio.h>

void number(int* n)
{
 printf("Enter the number of rows/columns ");
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

void diagonal(int n,int x[n][n],int y[n] )
{
  for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
   {
    if(i == j)
     {
       for(int k=i;k<n;k++)    
        y[k]=x[i][j];
     }
   }
  } 
}

void output(int n,int y[n])
{
 printf("The diagonal elements are : \n");
 for(int i=0;i<n;i++)
 printf("%d\n",y[i]);
}

int main()
{
 int n;
 number(&n);
 int x[n][n],y[n];
 input(n,x);
 diagonal(n,x,y);
 output(n,y);
}
