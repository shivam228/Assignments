#include<stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
int fd = open("sample.txt",O_WRONLY | O_APPEND);
int fd1 = dup2(fd, 7);
write(fd1,"hello",5);
close(fd);
close(fd1);
return 0;
}

