#include<stdio.h>
#include <fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
int main()
{ 
int n,fd;
struct{
int trans_no;
int trans_count;
}trans[3];
for(n=0;n<3;n++)
{
trans[n].trans_no  = n+1;
trans[n].trans_count =0;
}
fd = open("record.txt", O_RDWR |O_CREAT);
write(fd,trans,sizeof(trans));
close(fd);
return 0;
}
