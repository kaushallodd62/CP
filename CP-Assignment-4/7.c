/*CP-Assignment-4
Author - Kaushal Lodd
Roll no. T090
Question 7*/

#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME 128
#define OR ||
#define AND &&

int main(int argc, char const *argv[])
{
	FILE *fp1, *fp2, *ft;
	char name1[MAX_NAME], name2[MAX_NAME];
	fp1 = fopen("Names1.txt", "r");
	fp2 = fopen("Names2.txt", "r");
	ft = fopen("NAMES.txt", "w");
	if (fp1 == NULL OR fp2 == NULL OR ft == NULL)
	{
		puts("Error in finding/opening file.");
		exit(1);
	}
	while (!(feof(fp1) AND feof(fp2)))
	{
		if (fgets(name1, MAX_NAME, fp1) == NULL)
		{
			while (fgets(name2, MAX_NAME, fp2) != NULL)
				fputs(name2, ft);
			break;
		}
		if (fgets(name2, MAX_NAME, fp2) == NULL)
		{
			while (fgets(name1, MAX_NAME, fp1) != NULL)
				fputs(name1, ft);
			break;
		}
		if (strcmp(name1, name2) < 0)
		{
			fputs(name1, ft);
			fseek(fp2, -(strlen(name2)), SEEK_CUR);
			continue;
		}
		else if (strcmp(name1, name2) > 0)
		{
			fputs(name2, ft);
			fseek(fp1, -(strlen(name1)), SEEK_CUR);
			continue;
		}
		else
			fputs(name1, ft);
	}
	printf("DATA ENTERED SUCCESSFULLY\n");
	fclose(fp1);
	fclose(fp2);
	fclose(ft);
	return 0;
}
