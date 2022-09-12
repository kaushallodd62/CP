/*CP-Assignment-3
Author-Kaushal Lodd
Roll No. T090
Question 7*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct point {

	float x,y;
};

struct circle {

	struct point O;
	float radius;	
};

void read (struct circle *, struct point *);
_Bool check (struct circle *, struct point *);
int main ()
{
	struct circle C;
	struct point P;	
	read(&C,&P);
	printf("%d\n",check(&C,&P));
	return 0;	
}
 void read (struct circle *ptr1, struct point *ptr2)
 {
 	system("clear");
 	puts("Enter Co-ordinates of the centre of the Circle");
 	printf("Abscissa: ");
 	scanf("%f",&ptr1->O.x);
 	printf("Ordinate: ");
 	scanf("%f",&ptr1->O.y);
 	printf("Enter radius: ");
 	scanf("%f",&ptr1->radius);
 	printf("\nEnter Co-oridnates of the Point\n");
 	printf("Abscissa: ");
 	scanf("%f",&ptr2->x);
 	printf("Ordinate: ");
 	scanf("%f",&ptr2->y);
 }
 _Bool check (struct circle *ptr1, struct point *ptr2)
 {
 	if (sqrt(pow((ptr2->x-ptr1->O.x),2)+pow((ptr2->y-ptr1->O.y),2))<ptr1->radius)
 		return 1;
 	else 
 		return 0;	
 }

