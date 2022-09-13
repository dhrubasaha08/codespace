/************************************************************************************************
Name: Dhruba Saha
Program: Find the largest and the smallest numbers from a list of n numbers without using arrays.
Program No. 023
Date:2020.12.12
************************************************************************************************/

#include<stdio.h>

int main()
{
	int n,s1,s2,z;
	printf("Enter the number:");
	scanf("%d",&n);
	z=n;
	if(n>0)
	  {
	  printf("Enter the first number:\n");
	  scanf("%d",&s1);
	  n--;
	  if(n>0)
	    for(;n>=1;n--)
	       {
	       printf("Enter the next number:\n");
	       scanf("%d",&s2);
	       if(s1<s2)
	       s1=s2;
	       }
	  }
	printf("The Largest of %d numbers is %d\n",z,s1);
	return 0;
}