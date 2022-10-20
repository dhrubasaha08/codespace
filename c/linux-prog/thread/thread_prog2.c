#include <stdio.h>
#include <stdlib.h>
/* The following header files are for threads */
#include <pthread.h>
#include <bits/pthreadtypes.h>

volatile int x=0;
unsigned char buff[10];

void *pthread_ft1(void *);
void *pthread_ft2(void *);

int main(int argc, char *argv[])
{
  pthread_t th1, th2;
  int ret1, ret2;
  int num_updates;

  num_updates = atoi(argv[1]);

  pthread_create(&th1, NULL, pthread_ft1, (void *)&num_updates); 
  pthread_create(&th2, NULL, pthread_ft2, (void *)&num_updates);

  pthread_join(th1, NULL);
  pthread_join(th2, NULL);

}

void *pthread_ft1(void *param)
{
  int i = 0, loop_cnt = 0;
  int upd_idx = 0;

  while(1)
  {
    if(upd_idx == *((int *)(param)))
    {
      printf("Thread id %ld : Max updates reached ... exiting ..\n", pthread_self() );
      break;
    }
    if(x==1)
    {
       printf("thread id %ld : Buffer can be read at loop count = %d\n", pthread_self(), loop_cnt);
       for(i=0; i<10; i++)
         printf("%d ", buff[i]);
       printf("\n***********\n");
       x = 0;
       upd_idx ++;
    }
    loop_cnt++;

  }
  return NULL;
}


void *pthread_ft2(void *param)
{
  int i =0,loop_cnt = 0;
  int upd_idx = 0;

  while(1)
  {
    if(upd_idx == *((int *)(param)))
    {
      printf("Thread id %ld : Max updates reached ... exiting ..\n", pthread_self());
      break;
    }
    if(x==0)
    {
      for(i=0; i<10; i++)
        buff[i] = random() % 256;
      printf("Thread id %ld : Buffer is written at loop count = %d\n", pthread_self(), loop_cnt);
      printf("\n***********\n");
      x = 1;
      upd_idx ++;
    }
    loop_cnt++;
  }
  return NULL;
}
