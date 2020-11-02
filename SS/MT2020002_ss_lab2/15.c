#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main()
{
int fd[2];
char buf[5];
pipe(fd);
if(!fork())
{
close(fd[1]);
read(fd[0],buf,5);
printf("%s\n",buf);
}
else
{
close(fd[0]);
write(fd[1],"hello",5);
sleep(1);
}
return 0;
}
