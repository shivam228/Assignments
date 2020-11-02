#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include <time.h>
#include <sys/stat.h>
#include <sys/types.h>
int main()
{
struct stat fileStat;
int fd = open("try.txt",O_RDONLY);
fstat(fd,&fileStat);
char date[10];
printf("file inode: %d\n",fileStat.st_ino);
printf("file hard_links: %d\n",fileStat.st_nlink);
printf("file uid: %d\n",fileStat.st_uid);
printf("file gid: %d\n",fileStat.st_gid);
printf("file size: %d\n",fileStat.st_size);
printf("file block size: %d\n",fileStat.st_blksize);
printf("file no of blocks: %d\n",fileStat.st_blocks);
printf("file acess time: %s\n",ctime(&fileStat.st_atime));
printf("file modify time: %s\n",ctime(&fileStat.st_mtime));
printf("file last change time: %s\n",ctime(&fileStat.st_ctime));
close(fd);



return 0;
}
