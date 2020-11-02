#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
char mes[5];
read(STDOUT_FILENO, mes,5);
write(STDIN_FILENO, mes,5);
return 0;
}

