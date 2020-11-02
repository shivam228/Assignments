#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
int main()
{
int msgid;
key_t key;
struct msg
{
long int  mtype;
char message[50];
}msg;
printf("enter message queue id: ");
scanf("%d",&msgid);
msg.mtype =2;
msgrcv(msgid, &msg, sizeof(msg.message), msg.mtype, IPC_NOWAIT);
printf("Data recieved successfully from message queue.\n"); 
printf("message: %s\n", msg.message);
return 0;
}
