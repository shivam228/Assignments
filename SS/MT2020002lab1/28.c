#include <stdio.h>
#include <unistd.h>
#include <sched.h>

int main()
{
int min,max;
min = sched_get_priority_min(SCHED_FIFO);
max = sched_get_priority_max(SCHED_FIFO);
  printf("real time  priority range for SCHED_FIFO: %d - %d\n",min,max);
min = sched_get_priority_min(SCHED_RR);    
max = sched_get_priority_max(SCHED_RR);
  printf("real time priority range for SCHED_RR: %d - %d\n",min,max);
return 0;
}

