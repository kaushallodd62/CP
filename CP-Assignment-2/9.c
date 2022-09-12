/*CP-Assignment-2
Author-Kaushal Lodd
Roll No. T090
Question 9*/

#include<stdio.h>

int Func (int x,int y);
int main()
{
	int num1,num2;
	printf("Enter two numbers: ");
	scanf("%d %d",&num1,&num2);
	printf("F(%d,%d)= %d\n",num1,num2,Func(num1,num2));
	return 0;
}
 int Func (int x,int y)
 {
 	if (x>=y)
 		return Func(x-y,y)+1;
 	else 
 		return 0;
 }
