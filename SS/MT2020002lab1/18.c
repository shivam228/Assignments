#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<sys/types.h>
struct{
        int trans_no;
        int trans_count;
}trans;

int main()
{
     int input;
    int fd = open("record.txt", O_RDWR);
printf("select transaction number(1,2,3): \n");
scanf("%d",&input);
    struct flock lock;
    lock.l_type = F_WRLCK;
    lock.l_start = (input-1)*sizeof(trans);
    lock.l_whence = SEEK_SET;
    lock.l_len = sizeof(trans);
    lock.l_pid = getpid();
    lseek(fd,(input-1)*sizeof(trans),SEEK_SET); 
    read(fd,&trans,sizeof(trans));
    fcntl(fd, F_SETLKW, &lock);
    printf("current transaction no:%d\n",trans.trans_count);
    trans.trans_count++;
    lseek(fd,(input-1)*sizeof(trans),SEEK_SET);
    write(fd,&trans,sizeof(trans));
   printf("for more transaction press enter\n");
    getchar();
    getchar();
    printf("unlocked\n");
    lock.l_type = F_UNLCK;
    fcntl(fd, F_SETLKW, &lock);
      return 0;
}
