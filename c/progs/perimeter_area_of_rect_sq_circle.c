/*****************************************************************************
Name: Dhruba Saha
Program: Find the perimeter and the area of a rectangle, a square and a circle.
Program No. 006
Date: 2020.12.08
******************************************************************************/

#include<stdio.h>

int main()
{
	int choice;
	float length,breadth,perimeter,area;

step1:
	printf("1:Find the perimeter and the area of a rectangle.\n");
	printf("2:Find the perimeter and the area of a square.\n");
	printf("3:Find the perimeter and the area of a circle.\n");
	printf("Enter your choice (1,2,3):\n");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1: printf("Enter the length and breadth of a rectangle:\n");
			scanf("%f %f",&length,&breadth);
			perimeter=2*(length+breadth);
			printf("Perimeter of the rectangle having length %f and breadth %f is %f unit.\n",length,breadth,perimeter);
			area=length*breadth;
			printf("Area of the rectangle having length %f and breadth %f is %f sq. unit.\n",length,breadth,area);
			break;

		case 2: printf("Enter the length of the side of a square:\n");
			scanf("%f",&length);
			perimeter=4*length;
			printf("Perimeter of the square having side length %f is %f unit.\n",length,perimeter);
			area=length*length;
			printf("Area of the square having side length %f is %f unit.\n",length,area);
			break;

		case 3: printf("Enter the radius of a circle:\n");
			scanf("%f",&length);
			perimeter=2*(22/7.)*length;
			printf("Perimeter of a circle having radius length %f is %f unit.\n",length,perimeter);
			area=(22./7)*length*length;
			printf("Area of a circle having radius length %f is %f sq. unit.\n",length,area);
			break;

		default:printf("choose method 1 or 2 or 3\n");
			goto step1;
	}
	return 0;
}