//Insertion Sort

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay(int number_of_seconds)
{
    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + number_of_seconds)
        ;
}
int main()
{
    srand(time(0));
    int arr[50],n=12,temp,i,j;
    for(i=0;i<n;i++)
    {
        arr[i]=rand()%100;
        printf("%d  ",arr[i]);
    }
    printf("\nSorting");
    for(j=0;j<3;j++)
    {
    for(i=0;i<5;i++)
    {
        printf(".");
        delay(5000);
    }
        printf("\b\b\b\b\b");
        printf("     ");
        printf("\b\b\b\b\b");
    }
    printf("\n\nThe Sorted Array:\n");
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        for(j=i-1;(j>=0&&arr[j]>temp);j--)
            arr[j+1]=arr[j];
        arr[j+1]=temp;
        for(int k=0;k<n;k++)
            printf("%d  ",arr[k]);
        printf("\n\n");
    }
}
