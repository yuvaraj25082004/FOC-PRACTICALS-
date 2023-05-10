#include<stdio.h>
int main()
{
	int a,b;
	printf("enter any two numbers");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		printf("b is biggest number");
	}
	else
	{
		printf("a is biggest number");
	}
}