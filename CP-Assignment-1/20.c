#include<stdio.h>
#include<math.h>
double perim(double a, double b, double c);
double area(double a, double b, double c);
int main()
{
	double a,b,c;
	printf("Enter the sides of a triangle\n");
	printf("a= ");
	scanf("%lf",&a);
	printf("b= ");
	scanf("%lf",&b);
	printf("c= ");
	scanf("%lf",&c);
	printf("Perimeter: %.3lf\n",perim(a,b,c));
	printf("Area: %.3lf\n",area(a,b,c));
	return 0;
}
  double perim(double a, double b, double c)
  {
  	return a+b+c;
  }
  double area(double a, double b, double c)
  {
  	double s,area;
  	s=0.5*(a+b+c);
  	area=sqrt((s*(s-a)*(s-b)*(s-c)));   /* If output=-nan (NotANumber), then Triangle entered is an impossible Triangle, because sqrt(-ve)
  						is not defined (Imaginary)*/
  	return area;
  }
