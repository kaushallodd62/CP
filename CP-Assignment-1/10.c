#include<stdio.h>
float celsius(float x);
int main()
{
	float cels;
	printf("Fahrenheit\t|\tCelsius\n");
	for(float i=-40;i<=220;i=i+10)
	{
		cels=celsius(i);
		printf("%.2f\t\t|\t%.2f\n",i,cels);
	}
	return 0;
}
  
  float celsius(float x)
  {
  	float cels;
  	cels=(float)5/9*(x-32);
  	return cels;
  }

