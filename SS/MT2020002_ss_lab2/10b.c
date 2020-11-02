#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/time.h>
void my_handler (int sig)
{
printf("signal is caught\n");
printf("SIGINT ->Number =%d\n",sig);
exit(sig);
}
int main()
{
int temp;
struct sigaction new;
new.sa_handler = my_handler;
new.sa_flags = 0;
sigaction (SIGINT,&new,NULL);
printf(" press ctrl+c to catch SIGINT\n");
sleep(7);
printf("no signal\n");

return 0;
}
