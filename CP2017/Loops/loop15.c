#include<stdio.h>
int main()
{
	int x,n;
	float sum;
	printf("Enter values of x and n\n");
	printf("x=");
	scanf("%d",&x);
	printf("n=");
	scanf("%d",&n);
	sum=x;
	for (int i=1;i<=n;i++)
		sum+=((float)(x-i)/(2*i+1));
	printf("The sum of the series [S(x, n) = x + (x-1)/3 + (x-2)/5 + … + (x-n)/(2n+1)] = %.2f\n",sum);
	return 0;
}

