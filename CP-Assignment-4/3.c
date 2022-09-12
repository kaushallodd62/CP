/*CP-Assignment-4
Author - Kaushal Lodd
Roll no. T090
Question 3*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	FILE *fp;
	char fname[128], ch;
	printf("Enter .txt file name: ");
	scanf("%s", fname);
	fp = fopen(fname, "r+");
	if (fp == NULL)
	{
		puts("File not found.\n");
		exit(1);
	}
	while ((ch=fgetc(fp)) != EOF)
	{
		if (ch == 'z' || ch == 'Z')
			ch = ch-25;
		else
			ch++;
		fseek(fp, -1, SEEK_CUR);
		fprintf(fp, "%c", ch); 
		fflush(stdin);
	}
	rewind(fp);
	while((ch=fgetc(fp)) != EOF)
		printf("%c", ch);
	fclose(fp);
	return 0;
}
