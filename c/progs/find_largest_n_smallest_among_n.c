/****************************************************************
Name: Dhruba Saha
Program: Find the largest and the second largest among n numbers.
Program No. 024
Date:2020.12.12
****************************************************************/

#include <stdio.h>
#include <limits.h>
#define MAX_SIZE 1000

int main()
{
	int arr[MAX_SIZE],size,i;
	int max1,max2;
	printf("Enter size of the array(1-1000):");
	scanf("%d",&size);
	printf("Enter numbers in the array:");
	for(i=0;i<size;i++)
	   {
	   scanf("%d",&arr[i]);
	   }
	max1=max2=INT_MIN;
	for(i=0;i<size;i++)
	   {
	   if(arr[i]>max1)
	     {
	     max2=max1;
	     max1=arr[i];
	     }
	   else if(arr[i]>max2 && arr[i]<max1)
	          max2 = arr[i];
	     }
	printf("First largest number=%d\n",max1);
	printf("Second largest number=%d\n",max2);
	return 0;
}