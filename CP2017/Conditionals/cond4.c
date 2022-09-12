#include<stdio.h>
int main()
{
	int num[5];
	float avg=0;
	printf("Enter five integers:\n");
	for (int i=0;i<5;i++)
		scanf("%d",&num[i]);
	for (int i=0;i<5;i++)	
		avg+=(float)num[i]/5;
	printf("Numbers greater than the average are:\n");
	for (int i=0;i<5;i++)
	{
		if (num[i]>avg)
			printf("%d\n",num[i]);
	}
	printf("Average is:%.3f\n",avg);		
	return 0;
}
