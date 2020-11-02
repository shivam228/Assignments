#include <stdio.h>
int main()
{
int n =3;
while(n!=0)
{
if(n==5){
printf("%d",&n);

}
}
return 0;
}

/* output
attr       auxv    clear_refs  comm             cpuset  environ  fd      io      loginuid  mem        mounts      net  numa_maps  oom_score      pagemap      root   schedstat  smaps  stat   status   task
autogroup  cgroup  cmdline     coredump_filter  cwd     exe      fdinfo  limits  maps      mountinfo  mountstats  ns   oom_adj    oom_score_adj  personality  sched  sessionid  stack  statm  syscall  wchan
*/
