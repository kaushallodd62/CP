#include<stdio.h>
int main()
{
	char ch1,ch2;
	printf("Enter two letters(uppercase or lowercase):\n");
	scanf("%c %c",&ch1,&ch2);
	if (ch1>='a'&& ch1<='z')
	{
		if (ch2>='A' && ch2<='Z')
		{
			if (ch1=='a'+ch2-'A')
				printf("%c is the lowercase form of %c\n",ch1,ch2);
			else
				printf("%c & %c are of different case and are not the same letter\n",ch1,ch2);	
		}
		else 
		{	
			if (ch1==ch2)
				printf("%c & %c are of the same case and are the same letter\n",ch1,ch2);
			else 
				printf("%c & %c are of the same case but are not the same letter\n",ch1,ch2);
		}			
	}
	else 
	{
		if (ch2>='a' && ch2<='z')
		{
			if (ch1=='A'+ch2-'a')
				printf("%c is the uppercase form of %c\n",ch1,ch2);
			else
				printf("%c & %c are of different case and are not the same letter\n",ch1,ch2);	
		}
		else 
		{	
			if (ch1==ch2)
				printf("%c & %c are of the same case and are the same letter\n",ch1,ch2);
			else 
				printf("%c & %c are of the same case but are not the same letter\n",ch1,ch2);
		}
	}
	return 0;					
}
