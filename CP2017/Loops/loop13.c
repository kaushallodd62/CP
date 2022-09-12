#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int isprime(int x)
{
	int i;
	for (i=2;i<x;i++)
	{
		if (x%i==0)
			return 0;	
	}
	return x;
}
int main()
{
	int num,i,m,n=1;
	printf("Enter an integer: ");
	scanf("%d",&num);
	for (i=num;i>0;i--)
	{
		if (num%i==0)
		{
			for (m=2;m<i;m++)
			{
				while (pow(isprime(m),n)<=i)
				{
					if (i==pow(isprime(m),n))
					{	
						printf("Largest divisor which is a power of prime number is %d\n",i);
						exit(0);
					}
					n++;
				}
			}
		}
	}
	return 0;
}
