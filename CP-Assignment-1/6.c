#include<stdio.h>
#define PI 3.14
void Cube(int x);
void Cuboid(int x, int y, int z);
void Sphere(int x);
void Cylinder(int x, int y);
void Cone(int x, int y);
int main()
{
	int choice;
	printf("Program to calculate the Volume of shapes\n1. Cube\n2. Cuboid\n3. Sphere\n4. Cylinder\n5. Cone\n");
	printf("Enter Choice: ");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
		{
			int s;
			printf("Enter side of the Cube: ");
			scanf("%d",&s);
			Cube(s);
			break;
		}
		case 2:
		{
			int l,b,h;
			printf("Enter length, breadth and height of the Cuboid\n");
			scanf("%d %d %d",&l,&b,&h);
			Cuboid(l,b,h);
			break;
		}
		case 3:
		{
			int r;
			printf("Enter radius of the Sphere: ");
			scanf("%d",&r);
			Sphere(r);
			break;
		}
		case 4:
		{
			int r,h;
			printf("Enter radius and height of the Cylinder\n");
			scanf("%d %d",&r,&h);
			Cylinder(r,h);
			break;
		}
		case 5:
		{
			int r,h;
			printf("Enter radius and height of the Cone\n");
			scanf("%d %d",&r,&h);
			Cone(r,h);
			break;
		}
		default:	printf("Invalid Entry!\n");
	}
	return 0;
}
	void Cube(int x)
	{
		printf("Volume of the Cube is %.3f\n",(float)x*x*x);
	}
	void Cuboid(int x, int y, int z)
	{
		printf("Volume of the Cuboid is %.3f\n",(float)x*y*z);
	}
	void Sphere(int x)
	{
		printf("Volume of the Sphere is %.3f\n",(float)4/3*PI*x*x*x);
	}
	void Cylinder(int x, int y)
	{
		printf("Volume of the Cylinder is %.3f\n",(float)PI*x*x*y);
	}
	void Cone(int x, int y)
	{
		printf("Volume of the Cone is %.3f\n",(float)PI/3*x*x*y);
	}





