#include <stdio.h> 
#include <unistd.h> 
#include <sys/types.h> 
#include <fcntl.h> 
int main()
{
char msg[10] = "helloworld";
int *x;
int fd = open("sample.txt",O_RDWR | O_CREAT);
write(fd,msg,10);
 x = lseek (fd, 10, SEEK_CUR);
printf("%d\n",x);
write(fd,msg,10);
return 0;
}

