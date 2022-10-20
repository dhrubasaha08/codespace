/************************************************************
Name: Dhruba Saha
Program: Find surface area and volume of a cube and a cuboid.
Program No. 007
Date: 2020.12.04
************************************************************/

#include<stdio.h>

int main()
{
	int choice;
	float area,volume,length,breadth,height;

step1:	
	printf("1:Find surface area and volume of a cube.\n");
	printf("2:Find surface area and volume of a cuboid.\n");
	printf("Enter your choice (1,2):\n");
	scanf("%d",&choice);

	switch(choice)
	{		
		case 1: printf("Enter the length of the side of a cube\n");
			scanf("%f",&length);
			area=6*length*length;
			printf("The surface area of cube having side length of %f is %f.\n",length,area);
			volume=length*length*length;
			printf("The volume of cube with side length of %f is %f sq. unit.\n",length,volume);
			break;

		case 2: printf("Enter the length, breadth, height of the side of a cuboid\n");
			scanf("%f %f %f",&length,&breadth,&height);
			area=2*(length*breadth+breadth*height+height*length);
			printf("The surface area of cuboid having length %f, breadth %f , height %f is %f.\n",length,breadth,height,area);
			volume=length*breadth*height;
			printf("The volume of cuboid having length %f, breadth %f , height %f is %f sq. unit.\n",length,breadth,height,volume);
			break;

		default:printf("choose method 1 or 2\n");
			goto step1;
	}
	return 0;
}