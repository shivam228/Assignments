#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h> 
#include <sys/msg.h> 
#include <sys/types.h>
int main()
{
key_t key;
int msgid;
printf("enter  message id: ");
scanf("%d",&msgid);
msgctl(msgid, IPC_RMID, NULL);
printf("message queue removed successfully.\n");
return 0; 
} 
