/***********************************
Name: Dhruba Saha
Program: Find first n prime numbers.
Program No. 019
Date:2020.12.04
************************************/

#include<stdio.h>

int main()
{
	int n,i=3,count,c;

	printf("Enter the number of prime numbers required :");
	scanf("%d",&n);
	if(n>=1)
	{
	printf("First %d prime numbers are:",n);
	printf("\n2\n");
	}
	for(count=2;count<=n;i++)  
	{
	   for(c=2;c<i;c++)
	      {
	      if(i%c==0)
	      break;
              }
	   if(c==i)
	      {
	      printf("%d \n",i);
	      count++;
	      }
	}
	return 0;
}