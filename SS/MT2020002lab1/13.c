#include <sys/types.h>
#include <sys/time.h>
#include <err.h>
#include<sys/stat.h>
#include<fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{   
char msg[200];
int ret;
struct timeval wait;
wait.tv_sec = 10;
wait.tv_usec =0;
fd_set rd;
FD_ZERO(&rd);
FD_SET(0, &rd);
ret = select(1, &rd, NULL, NULL, &wait);
if (ret == -1)
perror("select()");
else if (ret)
{
read(0,msg,sizeof(msg));
printf("Data is available now.\n");
}
 else
 printf(" data is not available  within ten seconds.\n");
return 0;
}

