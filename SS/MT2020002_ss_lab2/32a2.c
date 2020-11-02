// writing 0 ticket number to file example.txt initially
#include<stdio.h>
#include <fcntl.h>
int main()
{ 
int n=0;
int fd1 = open("example.txt",O_RDWR|O_CREAT);
write(fd1,&n,sizeof(n));
return 0;
}

