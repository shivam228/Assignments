#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
union senum {
int val;
struct semid_ds *buf;
unsigned short int *array;
};
int main()
{
int ticket_no; 
int fd = open("example.txt", O_RDWR);
read(fd,&ticket_no,sizeof(ticket_no));
struct sembuf buf;
buf.sem_num = 0;
buf.sem_op = -1;
buf.sem_flg = 0;
union senum arg;
int key,semid;
key = ftok(".",'a');
semid = semget(key,1,0);
printf("Before entering to critical section.\n");
printf("Waiting for lock\n");
semop(semid, &buf, 1);
printf("current ticket no:%d\n",ticket_no);
ticket_no++;
lseek(fd,0L,SEEK_SET);
printf("Inside critical section.\n");
write(fd,&ticket_no,sizeof(ticket_no));
printf("Press return to exit critical section.\n");
getchar();
buf.sem_op = 1;
semop(semid, &buf, 1);
return 0;
}
