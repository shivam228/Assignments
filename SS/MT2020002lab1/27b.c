#include<unistd.h>
int main()
{
char *file = "ls";
char *a = "-R";
char *b = "-l";
execlp(file,a,b,NULL);
return 0;
}
