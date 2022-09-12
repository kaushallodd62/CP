#include<stdio.h>
int main()
{
	int num;
	long long int fact=1;
	printf("Enter the number whos factorial you want to find:");
	scanf("%d",&num);
	for (int i=2;i<=num;i++)
		fact*=i;
	printf("Factorial of %d is %lld\n",num,fact);
	return 0;	
}
