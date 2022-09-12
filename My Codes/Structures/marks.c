#include<stdio.h>
#include<stdlib.h>

struct marks {

	int total;
	int subject[3];
};

int main () {

	int i,j,n;
	printf("Enter the number of students: ");
	scanf("%d",&n);
	struct marks student[n];
	for (i=0;i<n;i++)
		for (j=0;j<3;j++) {
		
			printf("Enter marks of student %d in subject %d: ",i+1,j+1);
			scanf("%d",&student[i].subject[j]);
		}
	for (i=0;i<n;i++) {
	
		student[i].total=0;
		for (j=0;j<3;j++)
			student[i].total+=student[i].subject[j];
	}
	for (i=0;i<n;i++)
		printf("Total marks of student %d= %d\n",i+1,student[i].total);
	return 0;	
}	
		
