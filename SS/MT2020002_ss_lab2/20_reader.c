#include <stdio.h>
#include <unistd.h>
# include <fcntl.h>
int main()
{
int fd;
char msg[12];
fd = open("myfifo",O_RDONLY);
read(fd,msg,sizeof(msg));
printf("FIFO :%s\n",msg);
}
