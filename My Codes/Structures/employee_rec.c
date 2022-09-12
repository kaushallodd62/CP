#include<stdio.h>
#include<stdlib.h>

struct employee_rec {

	int emp_no;
	char name[50];
	int age;
	int YOJ;
	int salary;
};

void read (struct employee_rec *ptr);
int main ()
{
	int C_year,R_year;
	struct employee_rec employee;
	read(&employee);
	R_year=employee.YOJ+55-employee.age;
	printf("Retirement Year: %d\n",R_year);
	C_year=employee.YOJ+1;
	while (C_year<R_year)
	{
		employee.salary*=1.2;
		C_year++;
	}
	printf("Employee Salary at %d (with 20 percent hike per annum): %d\n",C_year,employee.salary);
	return 0;
}
 void read (struct employee_rec *ptr)
 {
 	printf("ENTER EMPLOYEE DETAILS:\n");
 	printf("NAME: ");
 	fgets(ptr->name,50,stdin);
 	printf("EMPLOYEE NO: ");
 	scanf("%d",&ptr->emp_no);
 	printf("AGE: ");
 	scanf("%d",&ptr->age);
 	printf("JOINING YEAR: ");
 	scanf("%d",&ptr->YOJ);
 	printf("SALARY AT JOINING: ");
 	scanf("%d",&ptr->salary);
	system("clear");
 }

