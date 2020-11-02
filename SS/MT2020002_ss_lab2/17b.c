#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void)
{
int fd[2];
pipe(fd);
if (!fork()) {
close(1);
dup2(fd[1],1);
close(fd[0]);
execlp("ls", "ls", "-l",NULL);
} 
else 
{
close(0);
dup2(fd[0],0);
close(fd[1]);
execlp("wc", "wc",NULL);
}
return 0;
}
