#include<stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{ int fd1;
int fd = open("try.txt", O_WRONLY | O_APPEND);
fd1 = dup(fd);
write(fd1,"This will be output of the dup fd\n", 34);
write(fd,"This will also be output to the file using fd\n", 46);
close(fd);
close(fd1);
return 0;
}
