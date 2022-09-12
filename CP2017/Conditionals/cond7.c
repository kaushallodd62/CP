#include<stdio.h>
void func(int num,int a)
{
	printf("The number %d is divisible by %d\n",num,a);		
}
int main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	if (a%2==0)
		func(a,2);
	if (a%3==0)
		func(a,3);
	if (a%5==0)
		func(a,5);
	return 0;				
}
	

