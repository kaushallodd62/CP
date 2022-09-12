/*CP-Assignment-3
Author-Kaushal Lodd
Roll No. T090
Question 10*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct subject {
	float phy,chem,math;	
};

struct student_record {
	char name[128];
	struct subject marks;
}temp;

void read (struct student_record stu[], int);
void sort (struct student_record stu[], int);
void print (struct student_record stu[], int);
int main ()
{
	system("clear");
	int n;
	printf("Enter number of students: ");
	scanf("%d",&n);
	struct student_record stu[n];
	read(stu,n);
	sort(stu,n);
	print(stu,n);
	return 0;
}
 void read (struct student_record stu[], int n)
 {
 	system("clear");
 	puts("ENTER DATA");
 	for (int i=0;i<n;i++) {
 		printf("\nStudent %d\n",i+1);
 		printf("Name: ");
 		fgets(stu[i].name,128,stdin);
 		fgets(stu[i].name,128,stdin);
 		printf("Physics marks: ");
 		scanf("%f",&stu[i].marks.phy);
 		printf("Chemistry marks: ");
 		scanf("%f",&stu[i].marks.chem);
 		printf("Math marks: ");
 		scanf("%f",&stu[i].marks.math);
 	}
 }
 void sort (struct student_record stu[], int n)
 {
 	for (int i=0;i<n-1;i++)
 		for (int j=0;j<n-i-1;j++) 
 			if ((stu[j].marks.phy>stu[j+1].marks.phy) || (stu[j].marks.phy==stu[j+1].marks.phy && stu[j].marks.chem>stu[j+1].marks.chem) || (stu[j].marks.phy==stu[j+1].marks.phy && stu[j].marks.chem==stu[j+1].marks.chem && stu[j].marks.math>stu[j+1].marks.math) || (stu[j].marks.phy==stu[j+1].marks.phy && stu[j].marks.chem==stu[j+1].marks.chem && stu[j].marks.math==stu[j+1].marks.math && strcmp(stu[j].name,stu[j+1].name)>0))
 			{
 				temp=stu[j];
 				stu[j]=stu[j+1];
 				stu[j+1]=temp;
 			}	
 }
 void print (struct student_record stu[], int n)
 {
 	system("clear");
 	printf("DATA AFTER SORTING\n");
 	for (int i=0;i<n;i++) {
 		printf ("\nStudent %d\n",i+1);
 		printf("Name: %s",stu[i].name);
 		printf("Physics marks: %.2f\n",stu[i].marks.phy);
 		printf("Chemistry marks: %.2f\n",stu[i].marks.chem);
 		printf("Math marks: %.2f\n",stu[i].marks.math);
 	}
 }
