/* Program to check if an integer is even or odd */
#include<stdio.h>
int main()
{
	int inum;
	printf("Enter the integer:");
	scanf("%d",&inum);
	if (inum%2==0)
		printf("The number is Even\n");
	else
		printf("The number is Odd\n");
	return 0;
}
