#include<stdio.h>
int input(int *x,int *y,int *z)
{
printf("\n enter three numbers:");
scanf("%d%d%d",x,y,z);
return 0;
}
int compute(int x,int y,int z,int *min)
{
*min=x<=y;
*min=x<z;
return *min;
}
void output(int x,int y,int z)
{
	if(x<=y)
	{
		if(x<=z)
		{
		printf("%d is min than %d and %d",x,y,z);
		}
		else
		{
		printf("%d is min than %d and %d",z,x,y);
		}
	}	
else
{
	if(y<z)
	{
	printf("%d is min than %d and %d",y,x,z);
	}
	else
	{
	printf("%d is min than %d and %d",z,x,y);
	}
}
}#include<stdio.h>
int input(int *x,int *y,int *z)
{
printf("\n enter three numbers:");
scanf("%d%d%d",x,y,z);
return 0;
}
int compute(int x,int y,int z,int *min)
{
*min=x<=y;
*min=x<z;
return *min;
}
void output(int x,int y,int z)
{
	if(x<=y)
	{
		if(x<=z)
		{
		printf("%d is min than %d and %d",x,y,z);
		}
		else
		{
		printf("%d is min than %d and %d",z,x,y);
		}
	}	
else
{
	if(y<z)
	{
	printf("%d is min than %d and %d",y,x,z);
	}
	else
	{
	printf("%d is min than %d and %d",z,x,y);
	}
}
}
