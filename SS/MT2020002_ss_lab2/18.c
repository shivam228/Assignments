#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
int main()
{
int fd1[2], fd2[2];
pid_t pid;
pipe(fd1);
pipe(fd2);
pid = fork();
if(pid == 0){
close(fd1[0]);
dup2(fd1[1], STDOUT_FILENO);
close(fd2[0]);
close(fd2[1]);
execlp("ls", "ls", "-l",NULL);
}
else
{
pid = fork();
if(pid == 0)
{
dup2(fd1[0], STDIN_FILENO);
dup2(fd2[1], STDOUT_FILENO);
close(fd1[1]);
close(fd2[0]);
execlp("grep", "grep", "^d",NULL);
}
else
{
close(fd2[1]);
dup2(fd2[0], STDIN_FILENO);
close(fd1[0]);
close(fd1[1]);
execlp("wc", "wc",NULL);
}
}
return 0;
}
