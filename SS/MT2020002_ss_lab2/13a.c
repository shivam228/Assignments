#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
int main()
{
int ret,pid;
printf("enter pid of process:");
scanf("%d",&pid);
printf("SIGSTOP to process id:%d\n",pid);
ret = kill(pid,SIGSTOP);
return 0;
}
