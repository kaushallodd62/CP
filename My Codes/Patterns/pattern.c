#include<stdio.h>
int main()
{
	int i,j,n;
	char ch='A'-1;
	printf("Enter number of lines:(<27):");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for (j=1;j<=2*i-1;j++)
		{
			if (j%2!=0)
				printf("*");
			else
				printf("%c",ch);	
		}
		ch++;
		printf("\n");
	}
	return 0;
}
