/***********************************************************
Name: Dhruba Saha
Program: Convert days to years, months, days and vice-versa.
Program No. 010
Date:2020.12.10
************************************************************/

#include<stdio.h>

int main()
{
	int days,totaldays,months,years,choice;

step1:	
	printf("1:Convert days to years, months, days.\n");
	printf("2:Convert years, months, days to days.\n");
	printf("Enter your choice (1,2):\n");
	scanf("%d",&choice);

	switch(choice)
	{		
		case 1: printf("Enter number of days\n");
			scanf("%d",&totaldays);
			years=(int)totaldays/365;
			days=totaldays-(365*years);
			months=(int)totaldays/30;
			days=(int)days-(months*30);
			printf("%d days=%d Years %d Months %d Days\n",totaldays,years,months,days);
			break;

		case 2: printf("Enter days,months and years\n");
			scanf("%d %d %d",&days,&months,&years);
			totaldays=years*365+months*30+days;
			printf("%d years,%d months,%d days=%d days.\n",years,months,days,totaldays);
			break;

		default:printf("choose method 1 or 2\n");
			goto step1;
	}
	return 0;
}