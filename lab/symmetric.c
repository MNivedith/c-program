#include<stdio.h>
int input(int *m,int a[10][10])
{ 
  int i,j; 
  printf("enter order of square matrix:");
  scanf("%d",m);
    printf("enter the values:");
  for(i=1;i<=*m;i++)
  {
   for(j=1;j<=*m;j++)
  }
  }
  return 0;
}
int compute(int m,int a[10][10])
{
int i,j;
 for(i=1;i<=m;i++)
 {
  for(j=1;j<=m;j++)
  {
  scanf("%d",&a[i][j]);
  }
 }
return 0;
}
void output(int m,int a[10][10])
{
 int i,j;
 for(i=1;i<=m;i++)
 {
  for(j=1;j<=m;j++)
  {
   if(a[i][j]!=a[j][i])
   {
    printf("matrix is not symmetric");
    }
   }
 }
printf("matrix is symmetric");
}
int main()
{
int m,a[10][10];
input(&m,a);
compute(m,a);
output(m,a);
return 0;
}

  
