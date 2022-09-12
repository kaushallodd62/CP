/*CP-Assignment-4
Author - Kaushal Lodd
Roll no. T090
Question 10*/

#include <stdio.h>
#include <stdlib.h>
#define OR ||


int main(int argc, char const *argv[])
{
	FILE *fp;
	char fname[128], ch;
	int word_count = 0;
	printf("Enter the name of the file: ");
	scanf("%s",fname);
	fp = fopen(fname, "r");
	if (fp == NULL)
	{
		printf("File not found.\n");
		exit(1);
	}
	while ((ch=fgetc(fp)) != EOF)
	{
		if (ch == ' ' OR ch == '\t' OR ch == '.' OR ch == ',' OR ch == ';' OR ch == '\n')
		{
			fseek(fp, -2, SEEK_CUR);	// Checking the previous character.
			ch = fgetc(fp);
			if (!(ch == ' ' OR ch == '\t' OR ch == '.' OR ch == ',' OR ch == ';' OR ch == '\n'))
				word_count++;
			fseek(fp, 1, SEEK_CUR);		// Moving pointer to next character.
		}
		if ((ch=fgetc(fp)) == EOF)
			word_count++;
		else
			fseek(fp, -1, SEEK_CUR);
	}
	printf("Number of words in the sentence: %d\n", word_count);
	fclose(fp);
	return 0;
}
