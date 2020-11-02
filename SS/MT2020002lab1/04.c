#include<stdio.h> 
#include <fcntl.h> 
int main() 
{ 
int fd1 = open("try.txt", O_RDWR | O_CREAT | O_EXCL); 
if (fd1 < 0)  
{ 
perror("c1");        
}
close(fd1);
return 0;    
} 
