#include<stdio.h>
#include <fcntl.h>
int main()
{
int fd1 = creat("try1.txt", O_RDWR);
printf("opened the fd = % d\n", fd1);
close(fd1);
}

