#include<stdio.h>
int main()
{
	int d,m,y,dig;
	printf("Enter Date, Month number and Year:\n");
	printf("d=");
	scanf("%d",&d);
	printf("m=");
	scanf("%d",&m);
	printf("y=");
	scanf("%d",&y);
	if (d==11 || d==12 || d==13)
	{
		printf("%dth ",d);
	}
	else
	{
		dig=d%10;
		switch (dig)
		{
			case 0:		printf("%dth ",d);
					break;
			case 1:		printf("%dst ",d);
					break;
			case 2: 	printf("%dnd ",d);
					break;
			case 3:		printf("%drd ",d);
					break;
			case 4 ... 9:	printf("%dth ",d);
					break;					
		}
	}	
	switch (m)
	{
		case 1:		printf("January,");
				break;
		case 2:		printf("February,");
				break;
		case 3:		printf("March,");
				break;
		case 4:		printf("April,");
				break;
		case 5:		printf("May,");
				break;
		case 6:		printf("June,");
				break;
		case 7:		printf("July,");
				break;
		case 8:		printf("August,");
				break;
		case 9:		printf("September,");
				break;
		case 10:	printf("October,");
				break;
		case 11:	printf("November,");
				break;
		case 12:	printf("December,");
				break;															
	}
	printf("%d\n",y);
	return 0;
}
