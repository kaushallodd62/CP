#include<stdio.h>
int isprime (int a)
{
	for (int i=2;i<=a/2;i++)
	{
		if (a%i==0)
			return 0;	
	}
	return 1;
}
int main()
{
	int i,j,n,prime,flag,count=0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for (i=2;i<=n;i++)
	{
		flag=1;
		for (j=2;j<=i;j++)
		{
			prime=isprime(j);
			if (i%j==0 && prime==1)
				if (j!=2 && j!=3 && j!=5)
				{	
					flag=0;
					break;
				}
		}
		if (flag==1)
			count++;
	}
	printf("Number of ugly prime numbers from 1 to %d are: %d\n",n,count);
	return 0;
}
