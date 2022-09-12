/*CP-Assignment-3
Author-Kaushal Lodd
Roll No. T090
Question 6*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct employee {
	
	char name[100];
	long int salary;
};

void read (struct employee emp[], int);
void sort (struct employee emp[], int);
void print (struct employee emp[], int);
int main ()
{
	int n;
	system("clear");
	printf("Enter number of employees: ");
	scanf("%d",&n);
	struct employee emp[n];
	read(emp,n);
	sort(emp,n);
	print(emp,n);
	return 0;
}
 void read (struct employee emp[], int n)
 {
 	system("clear");
 	puts("ENTER DATA");
 	for (int i=0;i<n;i++) {
 		printf("\nEmployee %d\n",i+1);
 		printf("Name: ");
 		fgets(emp[i].name,100,stdin);	
 		fgets(emp[i].name,100,stdin);
 		printf("Salary: ");
 		scanf("%ld",&emp[i].salary);
 	}
 }
 void sort (struct employee emp[], int n)
 {
 	struct employee temp;
 	for (int i=0;i<n-1;i++)
 		for (int j=0;j<n-i-1;j++)
 			if ((strlen(emp[j].name)==strlen(emp[j+1].name) && strcmp(emp[j].name,emp[j+1].name)>0) || (strlen(emp[j].name)>strlen(emp[j+1].name)))
 			{
 				temp=emp[j];
 				emp[j]=emp[j+1];
 				emp[j+1]=temp;
 			}
 }
 void print (struct employee emp[], int n)
 {
 	system("clear");
 	printf("DATA AFTER SORTING\n");
 	for (int i=0;i<n;i++) {
 		printf ("\nEmployee %d\n",i+1);
 		printf("Name: %s",emp[i].name);
 		printf("Salary: %ld\n",emp[i].salary);
 	}
 }

