#include <stdio.h>
int main()
{ 
int i,n,sum = 0;
 printf("enter the value of n;");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {sum+=i;
 }
 printf("the sum of the series is: %d",sum);
 return 0;
}