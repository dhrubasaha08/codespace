//Write a program (using fork() and/or exec() commands)where process and child execute:
//a)same program, same code.
//b)same program, different code.
//c)before terminating, the parent waits for the child to finish its task.

//Before terminating, the parent waits for the child to finish its task.

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>

int main()
{
    int status,pid;
    printf("I am the parent\n");
    pid=fork();
    if(pid<0)
    {
        printf("Error!\n");
        exit(1);
    }
    else if(pid==0)
    {
        printf("I am the child process \n");
        printf("My pid is %d\n",getpid());
        printf("The pid of parent is %d\n",getppid());
        exit(0);
    }
    else
    {
        wait(&status);
        //sleep(5);
        printf("Hello I am the parent process\n");
        printf("My actual pid is %d\n",getpid());
        printf("My parent's pid is %d\n",getppid());
        exit(0);
    }

}