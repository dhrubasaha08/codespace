/*********************************************************************************************
Name: Dhruba Saha
Program: Write a C program to sort n number in accending order and store the result in a file
Program No : 5
Date:9/3/2021
*********************************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    int *a,n,i,j,t;

    printf("Enter how many number to be sorted:\n");         //input
    scanf("%d",&n);
    a=(int *)malloc(n *sizeof(int));            //dynamic allocation
    printf("Enter %d Numbers:\n",n);
    for(i=0;i<=n-1;i++)                 //scaning entered numbers
        scanf("%d",(a+i));
    for(i=0;i<n;i++)            //bouble sort
        for(j=0;j<=i;j++)
            if(*(a+i)<*(a+j))
            {
                t=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=t;
            }
    fp=fopen("Output.dat","w");             //output the data into a file
    fprintf(fp,"After Sorting in Ascending Order:\n");
    for(i=0;i<n;i++)
    fprintf(fp,"%d\n",*(a+i));
    fclose(fp);

    return 0;
}

/**********************************
Output(In Command line):
Enter how many number to be sorted:
5
Enter 5 Numbers:
56
98
63
45
10
Output(In output file):
After Sorting in Ascending Order:
10
45
56
63
98

***********************************/