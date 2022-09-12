/*CP-Assignment-3
Author-Kaushal Lodd
Roll No. T090
Question 5*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<termios.h>
#include<unistd.h>

struct student {

	char name[100];
	int marks[5];
	char grade;
}stu[100];
int n=0;

void input (void);
void print (void);
void average (void);
int getch(void);
int main ()
{
	int choice;
 	system("clear");
	puts("--------------------------------------------------------------------------------");
	puts("                             STUDENT INFORMATION");
	puts("--------------------------------------------------------------------------------");
	printf("1.Add Student Information\n2.Display Student Information\n3.Class Average\n4.Exit\n");
	puts("--------------------------------------------------------------------------------");
	printf("Enter Choice: ");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:	input();
			break;
		case 2: print();
			break;	
		case 3: average();
			break;
		case 4:	exit(0);	
	}
	return 0;
}
 void input (void)
 {
	system("clear");
	int num;
	printf("Enter number of students: "); 	
	scanf("%d",&num);
	for (int i=n;i<n+num;i++)
	{
		system("clear");
		puts("--------------------------------------------------------------------------------");
		printf("				STUDENT %d\n",i+1);
		puts("--------------------------------------------------------------------------------");
		printf("\nName: ");
		fgets(stu[i].name,100,stdin);
		fgets(stu[i].name,100,stdin);
		printf("\nEnter Marks\n");
		for (int j=0;j<5;j++)
		{
			printf("Subject %d: ",j+1);
			scanf("%d",&stu[i].marks[j]);
		}
		printf("\nEnter Grade: ");
		scanf("%c",&stu[i].grade);
		scanf("%c",&stu[i].grade);
	}
	n=n+num;
	system("clear");
	puts("--------------------------------------------------------------------------------");
	printf("\n                   DATA ENTERED SUCCESSFULLY!!!\n\n");
	puts("--------------------------------------------------------------------------------");
	printf("Enter any key to continue\n");
	getch();
	getch();
	main();
 }
 void print (void)
 {
 	system("clear");
 	int i;
 	float avg=0;
 	char string[100];
 	if (n==0)
 	{
 		puts("--------------------------------------------------------------------------------");
		printf("\n                   	NO STUDENT RECORD PRESENT!!!\n\n");
		puts("--------------------------------------------------------------------------------");
		printf("Enter any key to continue\n");
		getch();
		getch();
		main();
 	}
 	puts("--------------------------------------------------------------------------------");
	printf("\n                   ENTER THE NAME OF THE STUDENT\n\n");
	puts("--------------------------------------------------------------------------------");
	printf("Name: ");
	fgets(string,100,stdin);
	fgets(string,100,stdin);
	for (i=0;i<n;i++)
		if (!strcmp(string,stu[i].name))
			break;
	if (i==n)
	{
		system("clear");
		puts("--------------------------------------------------------------------------------");
		printf("\n                   NO RECORD FOUND!!\n\n");
		puts("--------------------------------------------------------------------------------");
		printf("Enter any key to continue\n");
		getch();
		getch();
		main();
	}
	system("clear");
	puts("--------------------------------------------------------------------------------");
	printf("\nName: %s",stu[i].name);
	printf("\nMarks\n");
	for (int j=0;j<5;j++) {
		printf("Subject %d: %d\n",j+1,stu[i].marks[j]);
		avg+=(float)stu[i].marks[j]/5;
	}	
	printf("Student Average: %.2f\n",avg);
	printf("\nGrade: %c\n\n",stu[i].grade);	
	puts("--------------------------------------------------------------------------------");
	printf("Enter any key to continue\n");
	getch();
	main();		
 }
 void average (void)
 {
 	system("clear");
 	if (n==0)
 	{
 		puts("--------------------------------------------------------------------------------");
		printf("\n                   	NO STUDENT RECORD PRESENT!!!\n\n");
		puts("--------------------------------------------------------------------------------");
		printf("Enter any key to continue\n");
		getch();
		getch();
		main();
 	}
 	float avg;
 	puts("--------------------------------------------------------------------------------");
	printf("                   		CLASS AVERAGE\n");
	puts("--------------------------------------------------------------------------------");
 	for (int i=0;i<5;i++)
 	{
 		avg=0;
 		for (int j=0;j<n;j++)
 			avg+=(float)stu[j].marks[i]/n;
 		printf("\nSubject %d: %f\n",i+1,avg);	
 	}
 	printf("\n");
	puts("--------------------------------------------------------------------------------"); 
	printf("Enter any key to continue\n");
	getch();
	getch();
	main();	
 }
 int getch(void)
 {
   	struct termios oldattr, newattr;
    	int ch;
    	tcgetattr( STDIN_FILENO, &oldattr );
    	newattr = oldattr;
    	newattr.c_lflag &= ~( ICANON | ECHO );
    	tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    	ch = getchar();
    	tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    	return ch;
 }
