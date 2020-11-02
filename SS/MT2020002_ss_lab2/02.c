#include <stdio.h> 
#include <sys/resource.h> 
#include <string.h> 
#include <errno.h> 
#include <unistd.h> 
#include <sys/types.h> 
#include <sys/stat.h> 
#include <fcntl.h> 
  
int main() { 
struct rlimit limit;
int ret = getrlimit(RLIMIT_NOFILE, &limit);
if(ret==0)
printf("resources limit= %ld\n", limit.rlim_cur); 
return 0;
}
