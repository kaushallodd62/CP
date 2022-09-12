/* Program to find greatest of three integers */
#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter three integers\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	if (num1>num2)
	{	
		if (num1>num3)
			printf("The largest integer is %d\n",num1);
		else 
			printf("The largest integer is %d\n",num3);
	}
	else 
	{
		if (num2>num3)
			printf("The largest integer is %d\n",num2);
		else
			printf("The largest integer is %d\n",num3);
	}
	return 0;
}
