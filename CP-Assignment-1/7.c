#include<stdio.h>
int main()
{
	int num,arr[10],i,flag=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	i=0;
	while(num!=0)
	{
		arr[i]=num%10;
		num=num/10;
		i++;
	}
	for (i=0;i<10;i++)
	{
		if (arr[i]==5 && arr[i+1]==5 && arr[i+2]==5)
		{	
			printf("Result: YES\n");
			flag=1;
			break;
		}	
	}
	if (flag==0)
		printf("Result: NO\n");
	return 0;	
}
