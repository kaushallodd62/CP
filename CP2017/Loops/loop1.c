#include<stdio.h>
int main()
{
	int num,i;
	printf("Enter till where you want to print numbers:");
	scanf("%d",&num);
	for (i=1;i<=100;i++)
		printf("\t%d",i);
	printf("\n");
	return 0;	
}
