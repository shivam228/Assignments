#include<unistd.h>
int main()
{
char *path = "/bin/ls";
char *a[] = {path,"-Rl",NULL};
execv(path,a);
return 0;
}
