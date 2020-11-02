#include<stdio.h>
int main(int argc,char *argv[],char *envp[]){

int a,b;
a =10;
b=20;
printf("Filename: %s\n",argv[0]);
printf("%s %s\n",argv[1],argv[2]);
printf("sum = %d\n",a+b);

return 0;
}
