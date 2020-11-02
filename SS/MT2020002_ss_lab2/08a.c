#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/time.h>
void my_handler (int sig)
{
printf("signal is caught\n");
printf("SIGSEGV ->Number =%d\n",sig);
exit(0);
}
int main()
{
int temp;
signal(SIGSEGV,my_handler);
printf("catching SIGSEGV\n");
printf("enter number");
scanf("%d", temp);//will give segementation fault
return 0;
}
