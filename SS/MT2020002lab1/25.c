
#include <unistd.h>
#include <stdio.h>
#include<stdlib.h>
int main(void)
{
int status;
pid_t pid1,pid2,pid3;
pid1 = fork();
if (pid1 == 0) {
sleep(1);
printf("child1:pid = %d and ppid = %d\n",getpid(), getppid()); 
 }
else{
pid2 = fork();
if (pid2 == 0) {
sleep(2);
printf("child2 : pid = %d and ppid = %d\n", getpid(), getppid());
 }
 else {
 pid3 = fork();
if (pid3 == 0) {
 sleep(10);
printf("child3 : pid = %d and ppid = %d\n", getpid(), getppid());
            }
else{
 waitpid(pid3, &status, 0);
 printf("Parent: %d\n", getpid());
 }
 }
}
return 0;
}

