#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/time.h>
void my_handler (int sig)
{
printf("SIGALRM\n");
printf("GoodMorning\n");
}
int main()
{
signal(SIGALRM,my_handler);
alarm(1);
pause();
return 0;
}
