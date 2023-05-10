#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,sum=0;
	printf("enter any number ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	sum= sum+pow(i,i);
}
printf("sum of series of %d",sum);
	
}