#include <stdio.h> 
#include <sys/resource.h> 
#include <string.h> 
#include <errno.h> 
#include <unistd.h> 
#include <sys/types.h> 
#include <sys/stat.h> 
#include <fcntl.h> 
  
int main() {   
struct rlimit limit, new_limit; 
limit.rlim_cur = 512;
limit.rlim_max = 1024;
setrlimit(RLIMIT_NOFILE, &limit);  
int ret = getrlimit(RLIMIT_NOFILE, &new_limit); 
printf("New resources limit= %ld\n", new_limit.rlim_cur);  
return 0; 
}   

