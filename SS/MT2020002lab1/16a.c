#include <stdio.h>
#include <fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/stat.h>

int main() {
  
    int fd = open("try.txt", O_RDWR | O_CREAT);
    struct flock lock;
    lock.l_type = F_WRLCK;
    lock.l_start = 0;
    lock.l_whence = SEEK_SET;
    lock.l_len = 0;
    lock.l_pid = getpid();
    fcntl(fd, F_SETLKW, &lock);
    printf("in  critical section\n");
    printf("press enter to unlock\n");
    getchar();
    printf("unlocked\n");
    lock.l_type = F_UNLCK;
    fcntl(fd, F_SETLKW, &lock);
      return 0;
}
