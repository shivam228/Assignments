#include<stdio.h>
#include <fcntl.h>
int main()
{ 
int n=0;
int fd1 = open("example", O_RDWR |O_CREAT);
write(fd1,&n,sizeof(n));
close(fd1);
return 0;
}

