/*****************************************************************
Name: Dhruba Saha
Program: Find the smallest and the second smallest among n numbers.
Program No. 025
Date:2020.12.12
*****************************************************************/

#include<stdio.h>
#include<string.h>
 
int main()
{
	int min1,min2;
	int array[100],size,i;
	printf("How many elements do you want to enter:\n");
	scanf("%d",&size);
	printf("Enter %d elements:\n",size);
	for(i=0;i<size;i++)
	   scanf("%d", &array[i]);
	if(array[0]<array[1])
	  {
	  min1=array[0];
	  min2=array[1];
	  }
	else
	    {
	    min1=array[1];
            min2=array[0];
	    }
	for(i=2;i<size;i++)
	   {
	   if(array[i]<min1)
	     {
	     min2=min1;
	     min1=array[i];
             }
           else if(array[i]<min2 && array[i]>min1)
	          min2=array[i];
	   }
	printf("Smallest element is %d\n",min1);
	printf("Second smallest element is %d\n",min2);
	return 0;
}