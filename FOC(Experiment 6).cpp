#include <stdio.h>
int main()
{ int n,i,sum = 0;
printf("enter the value of n:");
scanf("%d",&n);
for (i=2;i<=n;i +=2) 
{sum +=i;
}
printf("the sum of even number series is:%d",sum); 
return 0;
}