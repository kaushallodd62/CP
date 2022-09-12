#include<stdio.h>
int GCD(int a,int b)
{
	int gcd;
	for (int i=2;i<=a && i<=b;i++)
	{
		if (a%i==0 && b%i==0)
			gcd=i;
	}
	return gcd;
}
int main()
{
	int num1,num2,gcd,lcm;
	printf("Enter two numbers:\n");
	scanf("%d %d",&num1,&num2);
	gcd=GCD(num1,num2);
	lcm=num1*num2/gcd;
	printf("GCD(%d,%d)=%d and LCM(%d,%d)=%d\n",num1,num2,gcd,num1,num2,lcm);
	return 0;
}
