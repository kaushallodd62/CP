#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,term=0,sum=0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("The series is ");
	for (int i=0;i<n;i++)
	{
		term=term+pow(10,i);
		printf("%d  ",term);
		sum=sum+term;
	}
	printf("\nThe sum of the series is %d\n",sum);
	return 0;
}
