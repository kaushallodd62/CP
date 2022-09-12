#include<stdio.h>
int main()
{
	int units;
	float charge;
	printf("Enter number of units consumed: ");
	scanf("%d",&units);
	if (units>300)
		charge=1*200+1.5*100+(units-300)*2;
	else if (units>200)
		charge=1*200+1.5*(units-200);
	else
		charge=1*units;
	printf("Total charge amount for %d units is Rs %.2f\n",units,charge);
	return 0;			
}
