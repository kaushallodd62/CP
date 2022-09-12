/*CP-Assignment-4
Author - Kaushal Lodd
Roll no. T090
Question 8*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define OR ||
#define AND &&

int main(int argc, char const *argv[])
{
	FILE *fp1, *fp2, *ft;
	int num1, num2, no_of_digits;
	fp1 = fopen("NUM1.txt", "r");
	fp2 = fopen("NUM2.txt", "r");
	ft = fopen("NUM.txt", "w");
	if (fp1 == NULL OR fp2 == NULL OR ft == NULL)
	{
		puts("Error in finding/opening file.");
		exit(1);
	}
	while (!(feof(fp1) AND feof(fp2)))
	{	
		if (fscanf(fp1, "%d", &num1) == EOF)
		{
			while (fscanf(fp2, "%d", &num2) != EOF)
				fprintf(ft, "%d\n", num2);
			break;
		}
		if (fscanf(fp2, "%d", &num2) == EOF)
		{
			while (fscanf(fp1, "%d", &num1) != EOF)
				fprintf(ft, "%d\n", num1);
			break;
		}
		if (num1 > num2)
		{
			fprintf(ft, "%d\n", num2);
			no_of_digits = log10(num1)+1;
			fseek(fp1, -(no_of_digits + 1), SEEK_CUR);
			continue;
		}
		else if (num2 > num1)
		{
			fprintf(ft, "%d\n", num1);
			no_of_digits = log10(num2)+1;
			fseek(fp2, -(no_of_digits + 1), SEEK_CUR);
			continue;
		}
		else	// num1 == num2
			fprintf(ft, "%d\n", num1);
	}
	printf("DATA ENTERED SUCCESSFULLY\n");
	fclose(fp1);
	fclose(fp2);
	fclose(ft);
	return 0;
}
