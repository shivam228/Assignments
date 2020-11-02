#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/time.h>
int main()
{
int ret;
struct timeval tv ={10,10};
struct timeval tv1 ={0,0};
struct itimerval value;
value.it_value = tv;
value.it_interval = tv1;
printf("starting timer\n");
ret = setitimer(ITIMER_REAL,&value,NULL);// will terminate in exactly 10 seconds
sleep(7);
while(1)
{}
return 0;
}

