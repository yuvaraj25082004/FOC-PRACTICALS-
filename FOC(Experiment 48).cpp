#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i, count=0,age,salary;
  float age_sum=0, salary_sum=0, avg_salary;
  char gender, marital_status, college_major;

  for(i=0;i<95;i++)
  {
    printf("Enter details for alumnus %d:\n",i+1);
    printf("Age: ");
    scanf("%d",&age);
    printf("Gender (M/F): ");
    scanf(" %c",&gender);
    printf("Marital Status (S/M): ");
    scanf(" %c",&marital_status);
    printf("College Major: ");
    scanf(" %c",&college_major);
    printf("Salary: ");
    scanf("%f",&salary);

    if(gender=='M' && marital_status=='M') // Male and Married
    {
      age_sum += age;
      salary_sum += salary;
      count++;
    }
    else if(gender=='F' && college_major=='C') // Female and Computer Science Major
    {
      age_sum += age;
      salary_sum += salary;
      count++;
    }
  }

  if(count != 0)
  {
    avg_salary = salary_sum / count;
    printf("\nAverage Salary: %.2f\n",avg_salary);
  }
  else
  {
    printf("\nNo data available.\n");
  }

  return 0;
}