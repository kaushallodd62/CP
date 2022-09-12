#include<stdio.h>
#include<math.h>
int armstrong(int a)
{
	if (a!=0)
		return pow(a%10,3)+armstrong(a/10);
	else
		return 0;	
}
int main()
{
	int upperlim,i;
	printf("Enter upper limit: ");
	scanf("%d",&upperlim);
	printf("Armstrong numbers till %d are:\n",upperlim);
	for (i=1;i<=upperlim;i++)
	{
		if (i==armstrong(i))
			printf("%d\t",i);
	}
	printf("\n");
	return 0;	
}
