#define _GNU_SOURCE
#include <stdio.h>
#include <ulimit.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <unistd.h>
int main(){
unsigned long n = ulimit(4);
mkfifo("myfifo", 0777);
int fd = open("myfifo",O_RDONLY|O_NONBLOCK);
printf("max no of files a process can open %lu\n",n);
int size = fcntl(fd, F_GETPIPE_SZ);
printf("max size of a pipe %d\n",size);
return 0;
}
