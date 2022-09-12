/*CP-Assignment-3
Author-Kaushal Lodd
Roll No. T090
Question 2*/

#include<stdio.h>
#include<stdlib.h>

struct census {

	char name[100];
	int pop;
	float literacy;
}cities[5],temp;

void read (struct census cities[]);
void sort (struct census cities[]);
void print (struct census cities[]);
int main ()
{
	read(cities);
	sort(cities);
	print(cities);
	return 0;
}
 void read (struct census cities[])
 {
 	system("clear");
	printf("ENTER DATA\n");
 	for (int i=0;i<5;i++)
 	{
 		printf("\nCity %d\n",i+1);
 		printf("Name: ");
		fgets(cities[i].name,100,stdin);
 		if (i!=0)
 			fgets(cities[i].name,100,stdin);
 		printf("Population: ");
 		scanf("%d",&cities[i].pop);
 		printf("Literacy Level: ");
 		scanf("%f",&cities[i].literacy);
 	}
 }
 void sort (struct census cities[])
 {
 	for (int i=0;i<4;i++)
 		for (int j=0;j<4-i;j++)
 			if (cities[j].literacy>cities[j+1].literacy)
 			{
 				temp=cities[j];
 				cities[j]=cities[j+1];
 				cities[j+1]=temp;
 			}
 }
 void print (struct census cities[])
 {
 	system("clear");
 	printf("Information entered after sorting\n\n");
 	for (int i=0;i<5;i++)
 	{
 		printf("City Name: %s",cities[i].name);
 		printf("Population: %d\n",cities[i].pop);
 		printf("Literacy Level: %.2f\n\n",cities[i].literacy);
 	}
 }
