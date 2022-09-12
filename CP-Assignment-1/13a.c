#include<stdio.h>
void set_union (int arr1[],int x,int arr2[],int y);
void set_intersection (int arr1[],int x,int arr2[],int y);
void set_difference (int arr1[],int x,int arr2[],int y);
int main()
{
	int n1,n2,i,j,k;
	printf("Enter the number of elements in A[]: ");
	scanf("%d",&n1);
	int A[n1];
	for (i=0;i<n1;i++)
	{
		printf("Element %d: ",i+1);
		scanf("%d",&A[i]);
	}
	printf("Enter the number of elements in B[]: ");
	scanf("%d",&n2);
	int B[n2];
	for (i=0;i<n2;i++)
	{
		printf("Element %d: ",i+1);
		scanf("%d",&B[i]);
	}
	set_union (A,n1,B,n2);
	set_intersection (A,n1,B,n2);
	set_difference (A,n1,B,n2);
	return 0;
}
  void set_union (int arr1[],int x,int arr2[],int y)
  {
  	int i,j,k,U[x+y];
  	for (i=0;i<x;i++)
  	{
  		U[i]=arr1[i];
  	}
  	k=i;
  	for (j=0;j<y;j++)
  	{
  		for (i=0;i<x;i++)
  		{
  			if (arr2[j]==arr1[i])
  				break;
  			else if (i==x-1)
  			{	
  				U[k]=arr2[j];
  				k++;
  			}		
  		}
  	}
  	printf("Elements of A Union B are:\n");
  	for (i=0;i<k;i++)
  		printf("%d\t",U[i]);
  	printf("\n");	
  }
  void set_intersection (int arr1[],int x,int arr2[],int y)
  {
  		int i,j,k=0,I[x>y?y:x];
  		for (i=0;i<x;i++)
  		{
  			for (j=0;j<y;j++)
  			{
  				if (arr1[i]==arr2[j])
  				{
  					I[k]=arr1[i];
  					k++;
  					break;
  				}
  			}
  		}
  		printf("Elements of A Intersection B are:\n");
  		for (i=0;i<k;i++)
  			printf("%d\t",I[i]);
  		printf("\n");	
  }
  void set_difference (int arr1[],int x,int arr2[],int y)
  {
  	int i,j,k=0,C[x],D[y];
  	for (i=0;i<x;i++)
  	{
  		for (j=0;j<y;j++)
  		{
  			if (arr1[i]==arr2[j])
  				break;
  			else if (j==y-1)
  			{
  				C[k]=arr1[i];
  				k++;	
  			}	
  		}
  	} 
  	printf("Elements of set A-B are:\n");
  	for (i=0;i<k;i++)
  		printf("%d\t",C[i]);
  	printf("\n");	
  	k=0;
  	for (j=0;j<y;j++)
  	{
  		for (i=0;i<x;i++)
  		{
  			if (arr2[j]==arr1[i])
  				break;
  			else if (i==x-1)
  			{
  				D[k]=arr2[j];
  				k++;	
  			}	
  		}
  	} 
  	printf("Elements of set B-A are:\n");
  	for (i=0;i<k;i++)
  		printf("%d\t",D[i]);
  	printf("\n");	
  }
  
