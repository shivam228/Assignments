#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
int main()
{
int fd = open("test.txt", O_RDWR |O_CREAT);
link("test.txt","hard.txt");
return 0; 
}
