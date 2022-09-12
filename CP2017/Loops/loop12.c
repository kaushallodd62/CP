#include<stdio.h>
#include<math.h>
int main()
{
	int side1,side2;
	float hyp;
	printf("SIDE 1\tSIDE 2\tHYPOTENUSE\n");
	for (side1=1;side1<500;side1++)
	{
		for (side2=1;side2<500;side2++)
		{
			hyp=hypot(side1,side2);
			if (side1<=side2 && hyp==(int)hyp && hyp<=500)
				printf("%d\t%d\t%.0f\n",side1,side2,hyp);
		}
	}
	return 0;
}
