/**********************************************************************************************
Name: Dhruba Saha
Program: Interchange the values of the two variables using and without using a third variable.
Program No. 012
Date:2020.12.10
**********************************************************************************************/

#include<stdio.h>

int main()
{
	int number1,number2,temp,choice;

step1:
	printf("1:Interchange using a third variable.\n");
	printf("2:Interchange without using a third variable.\n");
	scanf("%d",&choice);
switch(choice)
	{
	case 1: printf("Enter value of the numbers\n");//using a third variable
		scanf("%d %d",&number1,&number2);
		printf("Before swap first number = %d second number = %d\n",number1,number2);
		temp=number1+number2;//n1=5,n2=7,t=12
		number2=temp-number2;//n2=t-n1=12-7=5
		number1=temp-number1;//n1=12-5=7
		printf("After swap first number = %d and second number = %d\n",number1,number2);
		break;

	case 2: printf("Enter value of the numbers\n");//without using a third variable
		scanf("%d %d",&number1,&number2);
		printf("Before swap first number = %d second number = %d\n",number1,number2);
		number1=number1+number2;
		number2=number1-number2;
		number1=number1-number2;
		printf("After swap first number = %d and second number = %d\n",number1,number2);
		break;

	default:printf("choose method 1 or 2\n");
		goto step1;
	}
	return 0;
}