/*CP-Assignment-2
Author-Kaushal Lodd
Roll No. T090
Question 35*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void squeeze (char S1[], char S2[]);
int main ()
{
	char S1[100],S2[100];
	puts("Enter String S1:");
	gets(S1);
	puts("Enter String S2:");
	gets(S2);
	squeeze(S1,S2);
	puts("Squeeze (S1, S2):");
	puts(S1);
	return 0;
}
 void squeeze (char S1[], char S2[])
 {
 	int i=0,j,k,flag;
 	while (S1[i]!='\0')
 	{
 		flag=0;
 		for (j=0;S2[j]!='\0';j++)
 			if (S1[i]==S2[j])
 			{	
 				flag=1;
 				for (k=i;S1[k]!='\0';k++)
 					S1[k]=S1[k+1];	
 				break;	
 			}
 		if (flag==0)
 			i++;			
 	}
 	
 }
