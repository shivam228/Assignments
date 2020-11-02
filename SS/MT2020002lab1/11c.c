#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
int fd, fd1;  
fd = open("try1.txt", O_WRONLY | O_APPEND|O_CREAT);
fd1= fcntl(fd, F_DUPFD, 0);
write(fd1,"This will be output of the dup fd\n", 34);
write(fd,"This will also be output to the file using fd\n", 46);
close(fd);
close(fd1);
return 0;
}

   



