#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
int main()
{
char msg;
int len;
int fd1 = open("try.txt", O_RDONLY);
int fd2 = open("sample.txt",O_RDWR);
while((len = read(fd1,&msg,1))>0)
write(fd2,&msg,1);
close(fd1);
close(fd2);

return 0;
}



