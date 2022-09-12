#include<stdio.h>
int main()
{
	int lowerlim, upperlim;
	printf("Printing prime  numbers in the given range\n");	
	printf("Enter lower limit and upper limit\n");
	scanf("%d %d", &lowerlim,&upperlim);
	for (int i=lowerlim;i<=upperlim;++i)
	{
		int prime=1;
		for (int j=2;j<i;j++)
		{
			if(i%j==0)
			{	
				prime=0;
				break;
			}
		} 
		if (prime==1)
			printf("\t%d\n",i);	
	}
	return 0;
}

