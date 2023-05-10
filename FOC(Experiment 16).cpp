#include<stdio.h>
int main()
{
	int i,n,sum=0,avg;
	scanf("%d",&n);
	printf("enter any number");
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("sum of n numbers is %d\n",sum);
	avg=sum/n;
	printf("average of n numbers is %d",avg);
	
}