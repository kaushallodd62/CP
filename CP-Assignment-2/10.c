/*CP-Assignment-2
Author-Kaushal Lodd
Roll No. T090
Question 10*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int count=0;
void printNum (int a);
int main()
{
	int num,orignum;
	printf("Enter a number: ");
	scanf("%d",&orignum);
	num=orignum;
	while (num!=0)
	{
		num/=10;
		count++;
	}
	printNum(orignum);
	printf("\n");
	return 0;
}
 void printNum (int a)
 {
 	int dig;
 	dig=a/pow(10,--count);
 	printf("%d ",dig);
 	a=abs(a%(int)pow(10,count));
 	if (a!=0)
 		printNum(a);
 }
