#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reorder (int n, char str[][30]);
int main()
{
	int i,n;
	char str[30][30];
	printf("Enter the number of strings: ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{	
		printf("String %d: ",i+1);
		scanf("%s",str[i]);
	}	
	reorder(n,str);
	puts("Reordered list of strings:");
	for (i=0;i<n;i++)
		printf("String %d: %s\n",i+1,str[i]);
	return 0;	
}
  void reorder (int n, char str[][30])
  {
  	int i,j;
  	char temp[30];
  	for (i=0;i<n-1;i++)
  		for (j=0;j<n-i-1;j++)
  		{
  			if (strcmp(str[j],str[j+1])>0)
  			{
  				strcpy(temp,str[j]);
  				strcpy(str[j],str[j+1]);
  				strcpy(str[j+1],temp);
  			}
  		}	
  }	
