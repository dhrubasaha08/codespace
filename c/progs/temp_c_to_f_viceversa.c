/************************************************************************
Name: Dhruba Saha
Program: Convert temperature from Centigrade to Fahrenheit and vice-versa.
Program No. 009
Date: 2020.12.08
*************************************************************************/

#include<stdio.h>

int main()
{
	float fh,cl;
	int choice;
step1:
	printf("1: Convert temperature from Fahrenheit to Celsius.\n");
	printf("2: Convert temperature from Celsius to Fahrenheit.\n");
	printf("Enter your choice (1,2):\n");
	scanf("%d",&choice);

	if(choice==1)
	   {
	   printf("Enter temperature in Fahrenheit:\n");
	   scanf("%f",&fh);
	   cl=(fh-32)/1.8;
	   printf("Temperature in Celsius: %.2f\n",cl);
	   }
	else if(choice==2)
	   {
	   printf("Enter temperature in Celsius:\n");
	   scanf("%f",&cl);
	   fh=(cl*1.8)+32;
	   printf("Temperature in Fahrenheit: %.2f\n",fh);
	   }
	else
	   {
	   printf("choose method 1 or 2\n");
	goto step1;
	   }
	return 0;
}