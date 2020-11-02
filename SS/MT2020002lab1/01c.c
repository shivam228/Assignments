#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
int main()
{
int fd = mkfifo("myfifo",0744);
return 0;
}
