#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main()
{
int fd[2];
int fd1[2];
char buf[7];
char buf1[8];
pipe(fd);
pipe(fd1);
if(!fork())
{
close(fd[1]);
read(fd[0],buf,7);
printf("%s",buf);
close(fd1[0]);
write(fd1[1],"shivam\n",8);
}
else
{
close(fd[0]);
write(fd[1],"hello\n",7);
sleep(1);
close(fd1[1]);
read(fd1[0],buf1,8);
printf("%s",buf1);
}
return 0;
}
