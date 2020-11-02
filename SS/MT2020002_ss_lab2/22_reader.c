#include <sys/types.h>
#include <sys/time.h>
#include <err.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
int main()
{
int fd;
char msg[12];
fd = open("myfifo",O_RDONLY);
struct timeval wait;
fd_set rdfs;
int ret;
FD_ZERO(&rdfs);
FD_SET(fd, &rdfs);
wait.tv_sec = 10;
wait.tv_usec =0;
ret = select(fd+1, &rdfs, NULL, NULL, &wait);
if (ret)
{
printf("data available");
}
else{
printf(" data is not available  within ten seconds.\n");
exit(0);
}
read(fd,msg,sizeof(msg));
printf("Message from fifo :%s\n",msg);
return 0;
}
