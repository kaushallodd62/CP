#include<stdio.h>
int main()
{
	int amount,x,dom[7]={100,50,20,10,5,2,1},count[7]={0};
	printf("Enter amount:");
	scanf("%d",&amount);
	x=amount;
	for(int i=0;i<7;i++)
	{
		while (x>=dom[i])
		{
			x-=dom[i];
			count[i]++;
		}
	}
	printf("The minimum number of notes for amount %d is when there are:\n",amount);
	for (int i=0;i<7;i++)
		if (count[i]!=0)
			printf("%d notes of %d\n",count[i],dom[i]);
	return 0;		
}

