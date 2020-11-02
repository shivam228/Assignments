#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main() {
char *filename;
filename="26_exea";
execl("26_exea",filename,NULL);
printf("wrong output");
return 0;
} 
