/***************************************
Name: Dhruba Saha
Program: Display first n natural number.
Program No. 016
Date:2020.12.04
***************************************/

#include <stdio.h>

int main()
{
	int i,n;

	printf("Input the value of terms\n");
	scanf("%d",&n);
	printf("The first %d natural numbers are:\n",n);
	for(i=1;i<=n;i++)
	printf("%d",i);
	return 0;
}