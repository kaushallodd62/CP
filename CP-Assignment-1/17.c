#include<stdio.h>
#include<stdlib.h>
void pattern_17a (void);
void pattern_17b (void);
int main()
{
	while(1)
	{
		int choice;
		printf("1.Pattern 17(a)\n2.Pattern 17(b)\n3.Exit\n");
		printf("Enter Choice: ");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:	pattern_17a();
				break;
			case 2:	pattern_17b();
				break;
			case 3:	exit(0);
			default:printf("Invalid Entry! Try again\n");		
		}
	} 
	
}
  void pattern_17a (void)
  {
  	int i,j,n,count;
  	printf("Enter number of rows: ");
  	scanf("%d",&n);
  	for (i=1;i<=n;i++)
  	{
  		count=1;
  		for (j=1;j<=i;j++)
  		{
  			printf("%d",count);
  			count++;
  		}
  		printf("\n");
  	}
  }
  void pattern_17b (void)
  {
  	int i,j,n,count=1;
  	printf("Enter number of rows: ");
  	scanf("%d",&n);
  	for (i=1;i<=n;i++)
  	{
  		for (j=1;j<=i;j++)
  			printf("%d",count);
  		count++;
  		printf("\n");
  	}
  }
