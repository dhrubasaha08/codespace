/****************************************************
Name: Dhruba Saha
Program: Check whether a number is prime or composite.
Program No. 016
Date:2020.12.04
*****************************************************/

#include<stdio.h>

int main()
{
	int i,number,c=0;

	printf("Enter the number\n");
	scanf("%d",&number);
	for(i=2;i<number;i++)
		if(number%i==0)
			c+=1;
	if(c==0)
	  printf ("The number %d is prime.\n",number);
	else
	  printf ("The number %d is a composite number.\n",number);
	return 0;
}