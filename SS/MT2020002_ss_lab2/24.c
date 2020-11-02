#include<stdio.h>
#include<unistd.h>
#include<sys/msg.h>
#include<sys/ipc.h>
#include<sys/types.h>
int main()
{
int id;
key_t key;
key  = ftok("2.c",'a');
id = msgget(key,IPC_CREAT|IPC_EXCL|0744);
printf("message queue id:%d\n",id);
printf("key value:%d\n",key);
return 0;
} 
