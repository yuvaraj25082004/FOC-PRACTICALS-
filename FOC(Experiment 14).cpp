#include<stdio.h>
int main()
{
	int i,n,sum=1;
	printf("enter any number ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum*i;
	}
	printf("factorial is %d",sum);
}