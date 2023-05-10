#include<stdio.h>
int main()
{
	int i,n,sum=0,su=0,total;
	printf("ENTER THE VALUE OF n");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)

	if(i%2==0)
	{
	sum +=i;	
	}
	else
	su +=i;

total = su-sum;
printf("sum of the series :: %d",total);
}