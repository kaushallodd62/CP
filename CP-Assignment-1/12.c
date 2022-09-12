#include<stdio.h>
int main()
{
	int units,tens,i;
	printf("Numbers whose sum of both digit is multiple of seven are:\n");
	for (i=10;i<100;i++)
	{
		units=i%10;
		tens=(i/10)%10;
		if ((units+tens)%7==0)
			printf("%d ",i);
	}
	printf("\n");
	return 0;
}
