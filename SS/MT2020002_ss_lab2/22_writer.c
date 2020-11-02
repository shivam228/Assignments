#include <stdio.h>
#include <unistd.h>
# include <fcntl.h>
int main()
{
int fd;
char msg[12];
fd = open("myfifo",O_WRONLY);
write(fd,"hello shivam",12);
return 0;
}
