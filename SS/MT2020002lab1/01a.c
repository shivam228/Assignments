#include<stdio.h>
#include<fcntl.h>
int main()
{
int fd = open("foo1.txt", O_RDWR |O_CREAT);
symlink("foo1.txt","softlink_1.txt");
return 0; 
}
