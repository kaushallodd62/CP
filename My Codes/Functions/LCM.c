#include<stdio.h>
int LCM(int a,int b,int c)
{
	if (c%a==0 && c%b==0)
		return c;
	else 
		return LCM(a,b,c+1);	
}

int main()
{
	int num1,num2,x,lcm;
	printf("Enter two numbers:\n");
	scanf("%d %d",&num1,&num2);
	x=num1>num2?num1:num2;
	lcm=LCM(num1,num2,x);
	printf("LCM(%d,%d) is %d\n",num1,num2,lcm);
	return 0;
}
