/*CP-Assignment-3
Author-Kaushal Lodd
Roll No. T090
Question 1*/

#include<stdio.h>
#include<stdlib.h>

struct employee_rec {

	char name[100];
	int id,salary;
};

void read (struct employee_rec employee[], int);
int main ()
{
	system("clear");
	int n,t_salary;
	printf("Enter the number of Employees: ");
	scanf("%d",&n);
	struct employee_rec employee[n];
	read(employee,n);
	printf("\nEnter Target salary: ");
	scanf("%d",&t_salary);
	printf("\nEmployees with salary less than Target salary:\n");
	for (int i=0;i<n;i++)
		if (employee[i].salary<t_salary)
			printf("%s",employee[i].name);
	return 0;		
	
}
 void read (struct employee_rec employee[], int n)
 {
 	system("clear");
 	for (int i=0;i<n;i++)
 	{
 		printf("ENTER DETAILS OF EMPLOYEE %d\n",i+1);
 		printf("Name: ");
 		fgets(employee[i].name,100,stdin);
 		fgets(employee[i].name,100,stdin);	
 		printf("Employee ID: ");
 		scanf("%d",&employee[i].id);
 		printf("Employee Salary: ");
 		scanf("%d",&employee[i].salary);
 	}
 }
