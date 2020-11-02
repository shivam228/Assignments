#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
int main()
{
if(!(fork())){
setsid();
chdir("/");
umask(0);
while(1)
{
printf("child pid: %d\n",getpid());
sleep(2);
printf("daemon process running\n");
}
}
else
exit(0);
return 0;
}
