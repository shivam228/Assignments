#include<unistd.h>
int main()
{
char *path = "ls";
char *a[] = {path,"-Rl",NULL};
execvp(path,a);
return 0;
}
