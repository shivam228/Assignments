#include <stdio.h>
#include <fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/stat.h>

int main() {
     int ticket_no;
     
    int fd = open("example", O_RDWR);
    read(fd,&ticket_no,sizeof(ticket_no));
    struct flock lock;
    lock.l_type = F_WRLCK;
    lock.l_start = 0;
    lock.l_whence = SEEK_SET;
    lock.l_len = 0;
    lock.l_pid = getpid();
    printf("before entering critical section\n");
    fcntl(fd, F_SETLKW, &lock);
    printf("inside  critical section\n");
    printf("current ticket no:%d\n",ticket_no);
    ticket_no++;
    lseek(fd,0,SEEK_SET);
    printf("press enter to unlock\n");
    write(fd,&ticket_no,sizeof(ticket_no));
    getchar();
    printf("unlocked\n");
    lock.l_type = F_UNLCK;
    fcntl(fd, F_SETLKW, &lock);
    return 0;
}

