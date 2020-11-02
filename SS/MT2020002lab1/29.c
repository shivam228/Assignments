#include<stdio.h>
#include<sched.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
struct sched_param sp;
sp.sched_priority = 10;  
pid_t pid;
int policy;
pid = getpid();
policy = sched_getscheduler(pid);
printf("intial scheduling policy is:%d\n",policy);
/*set sceduling to rr*/

int ret = sched_setscheduler(pid, SCHED_RR, &sp);
if (ret == -1) 
  perror("sched_setscheduler");
policy = sched_getscheduler(pid);
printf("changed scheduling policy is:%d\n",policy);
return 0;
}

