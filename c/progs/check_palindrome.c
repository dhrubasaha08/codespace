/********************************
Name: Dhruba Saha
Program: Check whether a number is palindrome or not.
Program No. 028
Date: 2021.01.15
********************************/


#include <stdio.h>

int main()
{
	int n,reverseN=0,remainder,originalN;

	printf("Enter the N:");
	scanf("%d",&n);
	originalN=n;	
	while(n!=0)
	{
		remainder=n%10;
		reverseN*=10+remainder;
		n/=10;
	}
	if(originalN==reversedN)
		printf("%d is a palindrome.",originalN);
	else
		printf("%d is not a palindrome.",originalN);
	return 0;
}
