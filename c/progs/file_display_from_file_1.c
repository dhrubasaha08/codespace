#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp1,*fp2,*fp3;
    char p;

    printf("Display the content of the input file\n\n\n");

    fp1=fopen("input1.dat","r");
    if(fp1==NULL)
    {
        printf("Null.\n");
        return 1;
    }

    fp2=fopen("output1.dat","w");
    if(fp2==NULL)
    {
        printf("Null.\n");
        return 1;
    }

    fp3=fopen("output1.dat","w");
    if(fp3==NULL)
    {
        printf("Null.\n");
        return 1;
    }

    while((p=getc(fp1))!=EOF)
    {
        putchar(p);
        putc(p,fp3);
    }

    while((p=getc(fp2))!=EOF)
    {
        putchar(p);
        putc(p,fp3);
    }
    
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    printf("\n\n\n");
    return 1;
}