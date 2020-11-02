#include <stdio.h>
#include <unistd.h>
int main()
{
char msg[12] = "hello shivam";
char buf[12];
int fd[2], i;
if (pipe(fd) < 0)
exit(1);
write(fd[1], msg, sizeof(msg));
read(fd[0], buf, sizeof(msg));
printf("% s\n", buf);
return 0;
}
