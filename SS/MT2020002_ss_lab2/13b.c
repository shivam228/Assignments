#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
void mu_handler(int sig)
{
printf("caught signal SIGSTOP");
exit(0);
}
int main()
{
signal(SIGSTOP, SIG_DFL);
printf("process id: %d\n",getpid());
printf("press enter to catch");
getchar();
printf("catching SIGSTOP\n");
sleep(10);
printf("no signal found");
return 0;
}

