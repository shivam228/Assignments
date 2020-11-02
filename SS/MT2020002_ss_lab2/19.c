#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int main(){
mknod("file_mknod", S_IFIFO | 0777, 0);
mkfifo("file_mkfifo", 0777);
return 0;
}
