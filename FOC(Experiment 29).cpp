#include<math.h>
#include<stdio.h>
double sum (int x,int n)
{
	double i,total = 1.0;
    for(i = 1; i <=n; i++)
    total = total+(pow(x,i)/i);
    return total;
}
int main()
{
	int x=2;
	int n=5;
	printf("%.2f",sum(x,n));
	return 0;
}