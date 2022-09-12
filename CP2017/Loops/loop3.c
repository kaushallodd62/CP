#include<stdio.h>
int main()
{
	int N;
	long long int fact=1;
	printf("First N values of the factorial series\n");
	printf("Enter the value of N:");
	scanf("%d",&N);
	for (int i=1;i<=N;i++)
	{
		fact*=i;
		printf("%lld\t",fact);
	}
	printf("\n");
	return 0;
}
