#include<stdio.h>

int Ackerman_func(int a,int b);
int main()
{
	int num1,num2;
	printf("Enter two numbers: ");
	scanf("%d %d",&num1,&num2);
	printf("A(%d,%d)= %d\n",num1,num2,Ackerman_func(num1,num2));
	return 0;
}
 int Ackerman_func(int a,int b)
 {
 	if (a==0)
 		return b+1;
 	else if	(b==0)
 		return Ackerman_func(a-1,1);
 	else 
 		return Ackerman_func(a-1,Ackerman_func(a,b-1));
 }
