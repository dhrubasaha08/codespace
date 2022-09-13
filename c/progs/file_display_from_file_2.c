#include<stdio.h>
#include<stdlib.h>

#define N 9

int main()
{
    FILE *fp2,*fp3;
    int i,p;
    float s=0;
    char filename[30];

    printf("Display the content of the input file\n\n\n");
    printf("Enter the file name:\n");
    scanf("%s",&filename);
    fp2=fopen(filename,"r");
    if(fp2==NULL)
    {
        printf("Null.\n");
        return 1;
    }

    fp3=fopen("output","w");
    if(fp3==NULL)
    {
        printf("Null.\n");
        return 1;
    }

    for(i=0;i<N;i++)
    {
    fscanf(fp2,"%d",&p);
    fprintf(fp3,"%d\t",p);
    printf("%d\t",p);
        s+=p;
    }
   

    s/=N;

    fprintf(fp3,"%f",s);

    fclose(fp2);
    fclose(fp3);

    printf("\n\n\n");
    return 1;
}