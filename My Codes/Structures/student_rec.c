#include<stdio.h>
#include<stdlib.h>

struct marks
{
	int m1;
	int m2;
	int m3;
};
struct student_rec 
{
	char name[100];
	int roll_num;
	struct marks m;
};

void read (struct student_rec student[]);
int main ()
{
	struct student_rec student[3],temp;
	puts("Enter Name, RollNo. and marks in three subjects of the students:");
	read(student);
	int i,j;
	float avg[3]={0};
	for (i=0;i<3;i++)
		avg[i]+=(float)(student[i].m.m1+student[i].m.m2+student[i].m.m3)/3;
	for (i=0;i<2;i++)	//Bubble Sort
		for (j=0;j<2-i;j++)
			if (avg[j]>avg[j+1])
			{
				temp=student[j];
				student[j]=student[j+1];
				student[j+1]=temp;
			}
	printf("\n");
	for (i=0;i<3;i++)
		printf("%s",student[i].name);
	return 0;					
}
 void read (struct student_rec student[])
 {
 	for (int i=0;i<3;i++)
 	{
 		printf("\nSTUDENT %d\n",i+1);
 		printf("Enter name: ");
 		if (i!=0) {
 			fgets(student[i].name,100,stdin);
 			fgets(student[i].name,100,stdin);
 		}
 		else 
 			fgets(student[i].name,100,stdin);	
 		printf("Enter Roll number: ");
 		scanf("%d",&student[i].roll_num);
 		printf("Enter marks m1,m2,m3:\n");
 		scanf("%d %d %d",&student[i].m.m1,&student[i].m.m2,&student[i].m.m3);
 	}
 }

