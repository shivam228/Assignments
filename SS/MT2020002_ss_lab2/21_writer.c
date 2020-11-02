#include <stdio.h>
#include <unistd.h>
# include <fcntl.h>
int main()
{
int fd;
int fd1;
char msg[5];
fd = open("myfifo",O_WRONLY);
write(fd,"hello shivam",12);
fd1 = open("myfifo1",O_RDONLY);
read(fd1,msg,5);
printf("Message from fifo :%s\n",msg);
return 0;
}

