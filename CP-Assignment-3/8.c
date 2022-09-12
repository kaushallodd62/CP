/*CP-Assignment-3
Author-Kaushal Lodd
Roll No. T090
Question 8*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct point {

	float x,y;
};

struct triangle {

	struct point pt1,pt2,pt3;
};

void read (struct triangle *);
float perimeter (struct triangle *);
float side_AB (struct point *, struct point *);
float side_BC (struct point *, struct point *);
float side_CA (struct point *, struct point *);
int main ()
{
	struct triangle tri;
	read(&tri);
	printf("\nPerimeter: %f\n",perimeter(&tri));
	return 0;
}
 void read (struct triangle *ptr)
 {
 	system("clear");
 	printf("Enter Co-ordinates of the Triangle\n");
 	printf("Point A (X and Y): ");
 	scanf("%f %f",&(*ptr).pt1.x,&(*ptr).pt1.y);
 	printf("Point B (X and Y): ");
 	scanf("%f %f",&(*ptr).pt2.x,&(*ptr).pt2.y);
 	printf("Point C (X and Y): ");
 	scanf("%f %f",&(*ptr).pt3.x,&(*ptr).pt3.y);
 }
 float perimeter (struct triangle *ptr)
 {
 	return side_AB(&ptr->pt1,&ptr->pt2)+side_BC(&ptr->pt2,&ptr->pt3)+side_CA(&ptr->pt3,&ptr->pt1);
 }
 float side_AB (struct point *ptr1, struct point *ptr2)
 {
 	float length;
 	length=sqrt(pow((ptr1->x-ptr2->x),2)+pow((ptr1->y-ptr2->y),2));
 	printf("\nLength of side AB: %f",length);
 	return length;
 }
 float side_BC (struct point *ptr1, struct point *ptr2)
 {
 	float length;
 	length=sqrt(pow((ptr1->x-ptr2->x),2)+pow((ptr1->y-ptr2->y),2));
 	printf("\nLength of side BC: %f",length);
 	return length;
 }
 float side_CA (struct point *ptr1, struct point *ptr2)
 {
 	float length;
 	length=sqrt(pow((ptr1->x-ptr2->x),2)+pow((ptr1->y-ptr2->y),2));
 	printf("\nLength of side CA: %f\n",length);
 	return length;
 }
