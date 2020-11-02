#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdio.h>
#include <sys/types.h>

int main()
{
key_t key = ftok("2.c",'a');
int shmid = shmget(key,1024,0777|IPC_CREAT);
char *str = (char*) shmat(shmid,(void*)0,0);
printf("detaching\n");
shmdt(str);
return 0;
}
