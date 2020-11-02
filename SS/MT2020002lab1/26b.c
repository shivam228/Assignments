#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main() {
char *filename,*args1,*args2;
filename="26_exeb";  
args1="number_a +"; 
args2="number_b";
execl("26_exeb",filename,args1,args2,NULL);
printf("Error");
return 0;
} 
