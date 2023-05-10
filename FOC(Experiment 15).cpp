#include <stdio.h>
#include <conio.h>

int main ()
{
int num,var,rem,sum=0, a = 0 ;

printf("please enter an integer:");
scanf("%d",&num);

var=num;

while(var!=0)
{
	var=var/10;
	++a;
}

var = num;

while(var>0)
{
rem=var%10;
sum = sum +(rem,a);
var=var/10;
}

if(sum==num)
{
printf("%d is an armstrong number\n",num);
}
else
{
printf("%d is not an armstrong number/n",num);
}
return 0;
}