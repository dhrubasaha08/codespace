/**********************************************
Name: Dhruba Saha
Program: Find all composite numbers from 1 to n.
Program No. 018
Date:2020.12.10
***********************************************/

#include<stdio.h>

int main()
{
	int i,j,number;
	printf("Find composite numbers between 1 to ");
	scanf("%d",&number);
	printf("All composite number between 1 to %d are\n",number);
	for(i=2;i<=number;i++)
	   for(j=2;j<i;j++)
		if(i%j==0)
		  {
		  printf("%d \n",i);
		  break;
		  }
	return 0;
}