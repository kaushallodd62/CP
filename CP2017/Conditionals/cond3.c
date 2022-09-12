#include<stdio.h>
#include<math.h>
int main()
{
	float num1,num2,num3;
	printf("Enter three numbers:\n");
	scanf("%f%f%f",&num1,&num2,&num3);
	float abs1=fabs(num1),abs2=fabs(num2),abs3=fabs(num3); 
	if (abs1>abs2)
	{
		if (abs1>abs3)
			printf("The greatest number(ignoring sign) is %.2f\n",num1);
		else
			printf("The greatest number(ignoring sign) is %.2f\n",num3);	
	}
	else 
	{
		if (abs2>abs3)
			printf("The greatest number(ignoring sign) is %.2f\n",num2);
		else 
			printf("The greatest number(ignoring sign) is %.2f\n",num3);	
	}
	return 0;
}


