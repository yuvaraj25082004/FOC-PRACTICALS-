#include<stdio.h>
int main()
{
	int array[100],search,c,n;
	printf("enter number of elements in array\n");
	scanf("%d",&n);
	printf("enter %d interger(s)\n",n);
	for(c=0;c<n;c++)
	scanf("%d",&array[c]);
	printf("enter a number to search\n");
	scanf("%d",&search);
	for (c=0;c<n;c++)
	{
		if(array[c]==search)
		{
			printf("%d is preasent at location %d.\n",search,c+1);
			break;
		}
	}
	if(c==n)
	printf("%d isn't present in the array.\n",search);
	return 0;
}
