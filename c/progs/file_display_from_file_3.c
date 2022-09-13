#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fl1,*fl2;
    int m;
    fl2=fopen("output.txt","w");
    fl1=fopen("input.txt","r");
    while(!feof(fl1))
    {
      m=getw(fl1);
      putw(m,fl2);
    }

    fclose(fl2);
    fclose(fl1);
    return 0;
}