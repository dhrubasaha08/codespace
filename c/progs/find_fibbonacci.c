/****************************************
Name: Dhruba Saha
Program: Print first n fibonacci numbers.
Program No. 029
Date: 2021.01.15
*****************************************/

#include<stdio.h>

int main()
{
	int a,b,c,i,terms;

	printf("Enter number of terms:\n");			//Input number from user
	scanf("%d",&terms);
	a=0;							//initialize fibonacci numbers
	b=1;
	c=0;
	printf("Fibonacci numbers:\n",terms);
	for(i=1;i<=terms;i++)					//Iterate through number of terms
	{
		printf("%d\t",c);
        	a=b;			// Copy a to b
        	b=c;			// Copy current to a
        	c=a+b;			// New term	
	}
	printf("\n");
	return 0;
}