#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
 pid_t  pid;
 pid = fork();
if (pid > 0)
{
printf("Parent process\n");
printf("process ID : %d\n",getpid());
sleep(2);
}
else if (pid == 0)
{
printf("Child process\n");
printf("Parent-ID: %d\n\n",getppid());
sleep(20);
printf("\nChild process after parent termination \n");
printf("Parent -ID: %d\n",getppid());
}
return 0;
}
