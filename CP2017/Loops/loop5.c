#include<stdio.h>
int GCD(int a,int b)
{
	int x;
	for (int i=1;i<=a && i<=b;i++)
	{
		if (a%i==0 && b%i==0)	
			x=i;		
	}
	return x;
}

int LCM(int a,int b)
{
	int y,max;
	max=(a>b)?a:b;
	while (1)
	{
		if (max%a==0 && max%b==0)
		{	
			y=max;
			break;
		}
		max++;	
	}
	return y;
}

int main()
{
	int a,b,gcd,lcm;
	printf("Enter two integers\n");
	scanf("%d %d",&a,&b);
	gcd=GCD(a,b);
	lcm=LCM(a,b);
	printf("gcd(%d,%d) is %d and lcm(%d,%d) is %d\n",a,b,gcd,a,b,lcm);
	return 0;
}
