#include<stdio.h>
#include <math.h>
int main()
{
	int n,x1,i,j;
	float x,sign,cosx,fact;
	printf("enter the number of the terms in the series\n");
	scanf("%d",&n);
	printf("Enter the value of x (in degree)\n");
	scanf("%f",&x);
	x1=x;
	x=x * (3.142/ 180.0);
	cosx=1;
	sign=-1;
	for(i=2;i<=n;i=i+2)
	{
		fact=1;
		for(j=1;j<=i;j++)
		{
			fact=fact*j;
		}
		cosx=cosx+(pow(x,i)/fact)*sign;
		sign=sign*(-1);
	}
	printf("sum of the cosine series=%7.2f\n",cosx);
	printf("the value of cos(%d) using library function=%f\n",x1,cos(x));
}