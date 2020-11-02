#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/time.h>
void my_handler (int sig)
{
printf("signal is caught\n");
printf("SIGFPE ->Number =%d\n",sig);
exit(sig);
}
int main()
{
int a=1,b=0;
int div;
struct sigaction new;
new.sa_handler = my_handler;
new.sa_flags = 0;
sigaction (SIGFPE,&new,NULL);
printf("catching SIGFPE\n");
div = a/b;

return 0;
}
