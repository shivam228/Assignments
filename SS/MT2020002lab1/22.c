#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
int main()
{
pid_t pid;
int fd;
char msg[5] = "hello";
char msg2[6] = "shivam";
fd = open("sample.txt",O_RDWR|O_APPEND|O_CREAT);
pid = fork();
if(pid==0)
{
printf("child process writing to file\n");
write(fd,&msg,sizeof(msg));
lseek(fd,sizeof(msg),SEEK_SET);
write(fd,"\n",1);
}
else
{
wait();
printf("parent process writing to file\n");
write(fd,&msg2,sizeof(msg2));
}
return 0;
}


