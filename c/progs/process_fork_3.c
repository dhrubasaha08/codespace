//Write a program (using fork() and/or exec() commands)where process and child execute:
//a)same program, same code.
//b)same program, different code.
//c)before terminating, the parent waits for the child to finish its task.

//Same program, different code.

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    int pid;
    pid=fork();
    if(pid<0)
    {
        printf("Error!\n");
        exit(1);
    }
    else if(pid==0)
    {
        printf("Hello I am the child process\n");
        printf("My pid is %d\n",getpid());
        printf("The value of pid is %d\n",pid);
        exit(0);
    }
    else
    {
        printf("Hello I am the parent process\n");
        printf("My actual pid is %d\n",getpid());
        printf("The  id of my child process is %d\n",pid);
        exit(0);
    }
}