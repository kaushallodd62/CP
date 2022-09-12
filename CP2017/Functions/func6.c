#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void encode (char *str1, char *str2);
void decode (char *str1, char *str2);
int main ()
{
	char str1[100],str2[100];
	system("clear");
	puts("Enter Text:");
	fgets(str1,100,stdin);
	encode(str1,str2);
	puts("Text after encoding:");
	puts(str2);
	decode(str1,str2);
	puts("Text after decoding:");
	puts(str2);
	return 0;
}
 void encode (char *str1, char *str2)
 {
 	int i;
 	for (i=0;str1[i]!='\0';i++)
 	{
 		if (str1[i]=='z' || str1[i]=='Z')
 			str2[i]=str2[i]-25;
 		else
 			str2[i]=str1[i]+1;		
 	}
 	str2[i]='\0';
 }
 void decode (char *str1, char *str2)
 {
 	int i;
 	for (i=0;str1[i]!='\0';i++)
 	{
 		if (str1[i]=='a' || str1[i]=='A')
 			str2[i]=str1[i]+25;
 		else
 			str2[i]=str1[i]-1;		
 	}
 	str2[i]='\0';
 }

