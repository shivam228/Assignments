#include <stdio.h>
#include <unistd.h>
# include <fcntl.h>
int main()
{
int fd,fd1;
char msg[12];
fd = open("myfifo",O_RDONLY);
read(fd,msg,sizeof(msg));
printf("Message from fifo :%s\n",msg);
fd1 = open("myfifo1",O_WRONLY);
write(fd1,"shiva",5);
return 0;
}
