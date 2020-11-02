#include<stdio.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
int main()
{
int current_priority;
int new_priority = 17;
int which = PRIO_PROCESS;
pid_t pid;
pid = getpid();
current_priority = getpriority(which,pid);
printf("%d\n",current_priority);
nice(new_priority);
current_priority = getpriority(which,pid);
printf("%d\n",current_priority);
return 0;
}


