#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include <time.h>
#include <sys/stat.h>
#include <sys/types.h>
int main()
{

struct stat ans;
char name[30];
printf("enter filename");
scanf("%s",&name);
if (stat(name, &ans) == -1) {
 perror("stat");
 exit(EXIT_SUCCESS);
           }
stat(name,&ans);
if(S_ISREG(ans.st_mode))
printf("\nfile type is regular");
else
if(S_ISCHR(ans.st_mode))
printf("\nfile type is chracter");

else
if(S_ISBLK(ans.st_mode))
printf("\nfile type is block");
else
if(S_ISDIR(ans.st_mode))
printf("\nfile type is directory");
else
if(S_ISFIFO(ans.st_mode))
printf("\nfile type is fifo");
else
printf("doesnot match");

return 0;
 
}


