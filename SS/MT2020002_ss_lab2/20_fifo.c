#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
int main()
{
int fd;
int fd1;
fd = mkfifo("myfifo",0744);
fd1 = mkfifo("myfifo1",0744);
printf("FIFO fd :%d\n",fd);
printf("FIFO fd :%d\n",fd1);
return 0;
}
