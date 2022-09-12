#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i,j,m,n,choice,r1,r2,c1,c2,temp;
	srand(time(NULL));
	puts("1.Row Exchange.");
	puts("2.Coloumn Exchange.");
	puts("3.Exit.");
	printf("Enter choice: ");
	scanf("%d",&choice);
	if (choice==3)
	{	
		puts("Goodbye!");
		exit(0);
	}	
	printf("Enter the dimensions of the matrix (m x n): ");
	scanf("%d %d",&m,&n);
	int arr[m][n];
	puts("The Matrix is:");
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			arr[i][j]=rand()%10;
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	switch (choice)
	{
		case 1:	{	printf("Enter the two rows to be exchanged: ");
				scanf("%d %d",&r1,&r2);
				r1=r1-1;
				r2=r2-1;
				for (j=0;j<n;j++)
				{
					temp=arr[r1][j];
					arr[r1][j]=arr[r2][j];
					arr[r2][j]=temp;
				}
				break;
			}
				
		case 2:	{	printf("Enter the two coloumns to be exchanged: ");
				scanf("%d %d",&c1,&c2);
				c1=c1-1;
				c2=c2-1;
				for (i=0;i<m;i++)
				{
					temp=arr[i][c1];
					arr[i][c1]=arr[i][c2];
					arr[i][c2]=temp;
				}
				break;
			}		
	}
	puts("Modified Matrix is:");
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
			printf("%d ",arr[i][j]);
		printf("\n");
	}
	return 0;
}
