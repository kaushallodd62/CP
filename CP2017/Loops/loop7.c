#include<stdio.h>
int main()
{
	long int num;
	int fact=1;
	printf("Enter an Integer:");
	scanf("%ld",&num);
	if (num==1)
		printf("0!=1 and 1!=1\n");
	for (int i=2;i<=num;i++)
	{
		fact*=i; 
		if (fact==num)
		{
			printf("%ld is %d's factorial\n",num,i);
			break;
		}
	}
	if (fact!=num)
		printf("%ld is not a factorial of an integer\n",num);
	return 0;	
}
