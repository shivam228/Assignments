#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
int main()
{
pid_t pid;
pid = fork();
if(pid == 0)
{
printf(" child id : %d\n", getpid());
printf("ppid of child:  %d\n", getppid());
printf("Killing Parent\n");
kill(getppid(), SIGKILL);
sleep(2);
printf("ppid of child after killing parent: %d\n", getppid());
sleep(7);
printf("Exiting child.\n");
}
else
{
printf("pid of parent: %d\n", getpid());
sleep(3);
}
return 0;
}
