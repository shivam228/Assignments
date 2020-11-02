#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <errno.h>
union senum {
int val;
struct semid_ds *buf;
unsigned short int *array;
};
int main()
{
union senum arg;
int key,semid;
key = ftok(".",'a');
semid = semget(key,1,IPC_CREAT |0744);
arg.val =1;//binary semaphore
semctl(semid,0,SETVAL,arg);
printf("semaphore id : %d\n",semid);
return 0;
}

