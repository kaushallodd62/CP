/*CP-Assignment-2
Author-Kaushal Lodd
Roll No. T090
Question 15*/

#include<stdio.h>
#define PI 3.14 

float power (float x, float n);
float fact (float n);
float cosine (float x, float n);
int main()
{
	float x,n;
	printf("Enter the value of x(in degrees) and n: ");
	scanf("%f %f",&x,&n);
	printf("cos(%.0f)= %.5f\n",x,cosine(x*PI/180,n));
	return 0;
}
 float cosine (float x, float n)
 {
 	if (n==0)
		return 1;
	else 
		return (power(-1,n)*power(x,2*n)/fact(2*n))+cosine(x,n-1);
 }
 float power (float x, float n)
 {
 	if (n==1)
 		return x;
 	else 
 		return x*power(x,n-1);	
 }
 float fact (float n)
 {
 	if (n==1)
 		return 1;
 	else 
 		return n*fact(n-1);	
 }
