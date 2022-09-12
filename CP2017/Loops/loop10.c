#include<stdio.h>
#include<math.h>
int main()
{
	int x,n,sum=0;
	printf("Enter  value of x and n:\n");
	scanf("%d %d",&x,&n);
	for (int i=1;i<=n;i++)
		sum+=pow(x,i);
	printf("The sum of the series S(x) for x=%d and n=%d id %d\n",x,n,sum);
	return 0;
}



