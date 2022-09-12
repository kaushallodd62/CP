#include<stdio.h>
int main()
{
	int i,j=1,k,n;
	printf("Enter number of rows:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for (k=1;k<=i;k++)
		{	
			printf("%d\t",j);
			j++;
		}
		printf("\n");
	}
	return 0;
}
