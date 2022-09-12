#include<stdio.h>
int main()
{
	int num,unit,tens;
	printf("Enter an integer:");
	scanf("%d",&num);
	unit=num%10;
	num=num/10;
	tens=num%10;
	printf("The tens digit is %d and the units digit is %d\n",tens,unit);
	return  0;
}
