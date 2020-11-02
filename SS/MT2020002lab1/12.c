#include<stdio.h>
#include <fcntl.h>
int main()
{
int fd1,mode;
int accmode;
fd1 = open("try.txt", O_WRONLY |O_CREAT);
mode = fcntl(fd1, F_GETFL);
accmode = mode & O_ACCMODE;
if(accmode == O_RDONLY)
printf("read only\n");
else if(accmode == O_WRONLY)
printf("write only\n");
else if(accmode == O_RDWR)
printf("read write only\n");
else
printf("unknown acess mode\n");
close(fd1);

return 0;
}

