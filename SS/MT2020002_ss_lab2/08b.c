#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/time.h>
void my_handler (int sig)
{
printf("signal is caught\n");
printf("SIGINT ->Number =%d\n",sig);
exit(0);
}
int main()
{
signal(SIGINT,my_handler);
printf("catching SIGINT\n");//press ctrl+c within 7 seconds will catch the signal and terminate the process
sleep(7);
printf("no signal\n");
return 0;
}
