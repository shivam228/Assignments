#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/time.h>
void my_handler (int sig)
{
if(sig == SIGFPE){
printf("signal is caught with floating point error\n");
}
exit(sig);
}
int main()
{
signal(SIGFPE,my_handler);
int a = 1;
int b = 0;
int div = a/b;
return 0;
}
