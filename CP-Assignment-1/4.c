#include<stdio.h>
int isTriangular(int n)
{
	int i=1,sum;
	while (sum<=n)
	{
		sum=sum+i;
		if (sum==n)
			return 1;
		i++;
	}
	return 0;
}
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("%d\n",isTriangular(num));
	return 0;
}
