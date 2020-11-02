#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main()
{
int fd1,fd2,fd3,fd4,fd5;
int count =1;
while(count !=0)
{
if(count==1)
{
fd1 = open("file1", O_RDWR | O_CREAT);
fd2 = open("file2", O_RDWR | O_CREAT);
fd3 = open("file3", O_RDWR | O_CREAT);
fd4 = open("file4", O_RDWR | O_CREAT);
fd5 = open("file5", O_RDWR | O_CREAT);
count++;
}

}
return 0;
}
