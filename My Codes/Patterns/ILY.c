#include<stdio.h>
int main()
{
	int i,j,k,l;
	for (i=1;i<=25;i++) 		/* i is used for next line(controlling y coordinate) */
	{
	
	/* Printing the letter I(25 units height and 25 units length) */
		
		if (i!=1 && i!=25)
		{
			for (j=1;j<13;j++)		/* j for controlling x coordinate */ 
				printf(" ");
			printf("*");
			for (j=1;j<=37;j++)       	/* Printing spaces (25+12) for printing of heart */
				printf(" ");
				
		}
		else 
		{
			for (k=1;k<=25;k++)		/* k for controlling x coordinate */ 
				printf("*");
			for (k=1;k<=25;k++)    		/* Printing spaces (25) for printing of heart */
				printf(" ");			
		}
		
	/* Printing heart (Two upright hollow Trapeziums + One small inverted empty Pyramid b/w Trapeziums + One big inverted hollow Pyramid) */
		
		if (i<5)
		{
			for (l=i;l<5;l++)		/* l for controlling x coordinate */ 
				printf(" ");
			
			for (l=1;l<=2*i+10;l++)		/* First Trapezium */
			{
				if (i==1 || l==1 || l==2*i+10)		/* Printing only Borders */
					printf("*");
				else 
					printf(" ");	
			}
			
			for (l=1;l<=2*(5-i)-1;l++)		/* Inverted small empty Pyramid (only for spacing) */
				printf(" ");
				
			for (l=1;l<=2*i+10;l++)			/* Second Trapezium */
			{
				if (i==1 || l==1 || l==2*i+10)
					printf("*");
				else 
					printf(" ");	
			}
			for (l=1;l<=25+(5-i);l++)		/* Printing space for U (25 spaces) */
				printf(" ");
			for (l=1;l<=25;l++)		/* Printing U */
			{
				if (l==1 || l==25)
					printf("*");
				else 
					printf(" ");	
			}			
		}
		if (i==5)		
		{
			for (l=1;l<40;l++)		/* Completing Trapezium of height 5 units */
			{
				if (l==1 || l==20 || l==39)
					printf("*");
				else 
					printf(" ");	
			}
			for (l=1;l<=25+(5-i);l++)		/* i=5. Thus, 25 spaces will get printed */
				printf(" ");
			for (l=1;l<=25;l++)		/* Printing U */
			{
				if (l==1 || l==25)
					printf("*");
				else 
					printf(" ");	
			}	
		}
		
		if (i>5)		/* Printing inverted hollow Pyramid */
		{
			for (l=20-(i-6);l<20;l++)	/* 20-(i-6) makes line i=6 to l=20 which is similar to doing for(i=n;i>0;i--) */
				printf(" ");				
			for (l=1;l<=2*(20-(i-6))-1;l++)
			{
				if (l==1 || l==2*(20-(i-6))-1)
					printf("*");
				else 
					printf(" ");	
			}
			for (l=1;l<=25+(i-6);l++)		/* Printing space for U (25 spaces) */
				printf(" ");
			for (l=1;l<=25;l++)		/* Printing U */
			{
				if (l==1 || l==25 || i==25)
					printf("*");
				else 
					printf(" ");	
			}		
		}				
		printf("\n");		
	}
	return 0;
}

