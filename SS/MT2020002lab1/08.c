#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
int main()
{
char msg;
int len;
int fd1 = open("try.txt", O_RDONLY);
while((len = read(fd1,&msg,1))>0)
if(msg == '\n')
printf("\n");
else
write(STDIN_FILENO,&msg,1);
close(fd1);

return 0;
}

