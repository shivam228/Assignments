#include<unistd.h>
int main()
{
char *path = "/bin/ls";
char *a = "-R";
char *b = "-l";
execle(path,a,b,NULL);
return 0;
}

