/***************************************************************
Name: Dhruba Saha
Program: Find binary equivalent of decimal number and vice-versa.
Program No. 037
Date:2021.01.20
****************************************************************/

#include <math.h>
#include <stdio.h>

long long binary(int n);
int decimal(long long n);

int main()
{	
	int n,choice;
	long long m;

step1:	printf("1:Convert decimal to binary\n");
	printf("2:Convert binary to decimal\n");
	printf("Enter your choice (1,2):\n");
	scanf("%d",&choice);

	switch(choice)
	{
	case 1:	printf("Enter a decimal number:\n");
		scanf("%d",&n);
		printf("%d in decimal=%lld in binary\n",n,binary(n));
		break;
	case 2:	printf("Enter a binary number:\n");
		scanf("%lld",&m);
		printf("%lld in binary=%d in decimal\n",m,decimal(m));
		break;
	default:printf("Choose method 1 or 2\n");
			goto step1;
		return 0;
	}
}

long long binary(int n)
{
	long long bin=0;
	int rem,i=1,step=1;
	while(n!=0)
	{
		rem=n%2;
		n/=2;
		bin+=rem*i;
		i*=10;
	}
	return bin;
}

int decimal(long long n)
{
	int dec=0,i=0,rem;
	while(n!=0)
	{
		rem=n%10;
		n/=10;
		dec+=rem*pow(2,i);
		++i;
	}
	return dec;
}


