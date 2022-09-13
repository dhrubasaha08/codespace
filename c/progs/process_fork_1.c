//Write a program (using fork() and/or exec() commands)where process and child execute:
//a)same program, same code.
//b)same program, different code.
//c)before terminating, the parent waits for the child to finish its task.

#include<stdio.h>
#include<unistd.h>

int main()
{
//make two process which run same
//progarm after this intruction
    printf("This is parent process\n");
    fork();
    printf("Hello World\n");
    return 0;
}