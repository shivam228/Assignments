#include <stdlib.h>
#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
pid_t pid;
pid = fork();
if (pid == 0)
{
printf("child exists\n");
exit(0);
}
else
{
printf("parent sleeping\n");
sleep(30);
}
return 0;
}
