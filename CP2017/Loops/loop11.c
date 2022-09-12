/*Program to print sum of n terms of the series 1,2,4,7,11...*/
/*Author:Kaushal Lodd*/
#include<stdio.h>
int main()
{
	int i,j,n,sum=1,series=1;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("The series is");
	for (i=0;i<=n;i++)
	{
		sum=sum+i;
		printf(" %d",sum);
		series=series+sum;
	}
	printf("\nSum of the Series is %d\n",series);
	return 0;
}
