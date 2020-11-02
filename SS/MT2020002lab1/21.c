#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
pid_t pid = fork();
if (pid == 0)
{
printf("in child process id:");
printf("%d\n",getpid());
printf("child parent id:%d\n",getppid());
}
else
{
printf("in parent process id:");
printf("%d\n",getpid());
sleep(2);

}
return 0;
}

