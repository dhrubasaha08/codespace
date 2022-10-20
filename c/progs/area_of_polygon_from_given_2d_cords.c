/*****************************************************************************************************************
Name: Dhruba Saha
Program: Write a C program to find area of a generic polygon whose 2D co-ordinates of vertices are given in order.
Program No. 21
Roll No. B.Sc(Sem-I)Comp-04
Date: 23.03.2021
*****************************************************************************************************************/
#include<stdio.h>
#include<stdlib.h>

void area(float x[],float y[],int n);

int main()
{
    int n,i;

    float *x=malloc(sizeof(float)*n);
    float *y=malloc(sizeof(float)*n);

    printf("Enter no of side (arm):");
    scanf("%d",&n);
    printf("Enter X coordinates :\n");
    for(i=0;i<n;i++)
        scanf("%f",&x[i]);
    printf("Enter Y coordinates :\n");
    for(i=0;i<n;i++)
        scanf("%f",&y[i]);
    area(x,y,n);
    free(x);
    free(y);
    return 0;
}

void area(float x[],float y[],int n)
{
    int i,j;
    float ans,area=0.0;
    j=n-1;
    for(i=0;i<n;i++)
    {
        area+=(x[j]+x[i])*(y[j]-y[i]);
        j=i;
    }
    ans=area/2.0;
    if(ans>=0)
        printf("The area of polygon=%f\n",ans);
    else 
        printf("The area of polygon=%f\n",-ans);
}