#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/time.h>
void my_handler (int sig)
{
printf("signal is caught\n");
printf("SIGSEGV ->Number =%d\n",sig);
exit(sig);
}
int main()
{
int temp;
struct sigaction new;
new.sa_handler = my_handler;
new.sa_flags = 0;
sigaction (SIGSEGV,&new,NULL);
printf("catching SIGSEGV\n");
printf("enter number-> ");
scanf("%d", temp);
return 0;
}
