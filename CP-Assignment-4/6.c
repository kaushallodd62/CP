/*CP-Assignment-4
Author - Kaushal Lodd
Roll no. T090
Question 6*/

#include <stdio.h>
#include <stdlib.h>
#define AND &&
#define OR ||

_Bool compare (FILE *, FILE *);
int main(int argc, char const *argv[])
{
	FILE *fp1, *fp2;
	char file1[128], file2[128];
	printf("Enter name of file 1: ");
	scanf("%s", file1);
	printf("Enter name of file 2: ");
	scanf("%s", file2);
	fp1 = fopen(file1, "r");
	fp2 = fopen(file2, "r");
	if(fp1 == NULL OR fp2 == NULL)
	{
		puts("File was not found!");
		exit(1);
	}
	if (compare(fp1, fp2))
		printf("The files are identical.\n");
	else
		printf("The files are not identical\n");
	fclose(fp1);
	fclose(fp2);
	return 0;
}
_Bool compare (FILE *fp1, FILE *fp2)
{
	char ch1 = fgetc(fp1);
	char ch2 = fgetc(fp2);
	while (ch1 != EOF AND ch2 != EOF)
	{
		if (ch1 != ch2)
			return 0;
		ch1 = fgetc(fp1);
		ch2 = fgetc(fp2);
	}
	if (ch1 == EOF AND ch2 == EOF)
		return 1;
	else
		return 0;
}
