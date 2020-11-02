#include<stdio.h>
#include<stdlib.h>
extern char **environ;
int main()
{
int i;
for(i=0;i<environ[i]!=NULL;i++)
{
printf("\n%s",environ[i]);
}
return 0;
}
