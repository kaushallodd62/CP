#include<stdio.h>
#include<math.h>
#define PI 3.141592
int fact(int a)
{
	if (a==1)
		return 1;
	else 
		return a*fact(a-1);	
}
float Taylor(float x,int n,float sum)
{
	float error;
	sum+=(pow(-1,n+1)*pow(x,2*n-1))/fact(2*n-1);
	error=fabs(sin(x)-sum);
	if (error<0.00001)	
	{	
		printf("The Taylor Series went upto %d terms\n",n);
		return sum;
	}	
	else 
		return Taylor(x,n+1,sum);
}

int  main()
{
	float x;
	float sinx1,sinx2,error;
	int choice;
	printf("Program to calculate sine value of a number\n");
	printf("Select choice\n");
	printf("1.Enter number in degrees.\n2.Enter number in Radians.\n");
	scanf("%d",&choice);
	printf("Enter number:");
	scanf("%f",&x);
	if (choice==1)
		x=(x*PI)/180;
	sinx1=sin(x);
	sinx2=Taylor(x,1,0);
	error=fabs(sinx1-sinx2);
	printf("The value using Taylor's Theorem is %.15f and using sinx from math.h is %.15f \nThe error is %.15f\n",sinx2,sinx1,error);
	return 0;
}	
