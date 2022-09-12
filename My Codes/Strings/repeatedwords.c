#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,j=0,n=0,k;
	char str[100],str_2D[50][25];
	puts("Enter Text:");
	gets(str);	
	for (i=0;str[i]!='\0';i++)
	{
		if (str[i]==' ')
		{
			str_2D[n][j]='\0';
			n++;
			j=0;
		}
		else 
		{
			str_2D[n][j]=str[i];
			j++;
		}
	}
	for (i=0;i<n;i++);
		puts(str_2D[i]);
	printf("\n");	
	for (i=0;i<n;i++)
		for (j=i+1;j<n;j++)
			if (strcmp(str_2D[i],str_2D[j])==0)
			{
				if (j==n-1)
					n=n-1;
				else	
				{	
					for (k=j;k<n;k++)
						strcpy(str_2D[k],str_2D[k+1]);
					n=n-1;
				}	
			}
	puts("Modified Text:");
	for (i=0;i<n;i++);
		puts(str_2D[i]);
	printf("\n");
	return 0;		
}
