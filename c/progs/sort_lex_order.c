/*************************************
Name: Dhruba Saha
Program: Sort in lexicographical order
Date: 2021.02.21
**************************************/

#include<stdio.h>
#include<string.h>

int main()
{	
	int i,j,n;
	char str[10][50],temp[50];

	printf("Enter the number of words:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Word[%d]: ",i+1);
		scanf("%s[^\n]",str[i]);
	}
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(strcmp(str[i],str[j])>0)
			{
				strcpy(temp,str[i]); 
				strcpy(str[i],str[j]);	
				strcpy(str[j],temp);
			}
	printf("In lexicographical order:\n");

	for(i=0;i<n;i++)
	puts(str[i]);

	return 0;
}