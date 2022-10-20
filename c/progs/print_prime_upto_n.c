/******************************************
Name: Dhruba Saha
Program: Find all prime numbers from 1 to n.
Program No. 017
Date:2020.12.04
*******************************************/

#include<stdio.h>

int main()
{
	int i,j,n,prime;
	printf("Find prime numbers between 1 to ");
	scanf("%d",&n);
	printf("All prime number between 1 to %d are ",n);
	for(i=2;i<=n;i++)
	{
	   prime=1;
	   for(j=2;j<=i/2;j++)
		if(i%j==0)
		{
		prime=0;
		break;
		}
	   if(prime==1)
		printf("%d \n",i);
	}
	return 0;
}

		