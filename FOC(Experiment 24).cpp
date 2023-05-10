#include<stdio.h>
#include<conio.h>
int main()
{
int first_number, second_number, temp;
printf("Enter first number: "); 
scanf("%d",&first_number);
printf("Enter second number: "); 
scanf("%d",&second_number);
printf("Before swapping \n");
printf("First number: %d \n", first_number);
printf("Second number: %d \n", second_number);
temp = first_number;  
first_number = second_number; 
second_number = temp; 
printf("After swapping \n");
printf("First number: %d \n", first_number);
printf("Second number: %d \n", second_number);
return 0;
}