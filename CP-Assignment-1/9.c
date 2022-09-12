#include<stdio.h>
int main()
{
	long int basic;
	float gross;
	printf("Enter basic salary: ");
	scanf("%ld",&basic);
	if (basic>=12000)
		gross=basic+0.3*basic+0.8*basic;
	else if (basic>8000)
		gross=basic+0.25*basic+0.7*basic;
	else if (basic>4000)
		gross=basic+0.2*basic+0.6*basic;
	else
		gross=basic+0.1*basic+0.5*basic;
	printf("Gross Salary of the Employee: %.2f\n",gross);
	return 0;		
}
