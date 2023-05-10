#include<stdio.h>
int main()
{
	int num,sum=0;
	scanf("%d",&num);
	while(num!=0)
	{
		int digits=num%10;
		num=num/10;
		sum=sum+digits;
		printf("sum of digits is %d",sum);
	}
	
}