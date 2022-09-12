#include<stdio.h>
int sumofdigits(long int a)
{
	if (a!=0)
		return a%10+sumofdigits(a/10);
	else
		return 0;	
}
int main()
{
	long int num;
	int sum;
	printf("Enter an integer: ");
	scanf("%ld",&num);
	do
	{
		sum=sumofdigits(num);
		num=sum;
	}
	while (sum>9);
	printf("Sum: %d\n",sum);
	return 0;
}
