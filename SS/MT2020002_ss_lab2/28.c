#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <string.h>

struct buffer {
    long m_type;
    char message[50];
} msg;

int main()
{
int size;
key_t key;
int msgid;
printf("enter message queue id :");
scanf("%d",&msgid);
struct msqid_ds msqid_ds, *buf;
buf = &msqid_ds;
msgctl(msgid, IPC_STAT,buf);
printf("Permission is : %d \n",  buf->msg_perm.mode);
buf->msg_perm.mode = 440;
msgctl(msgid, IPC_SET,buf);
msgctl(msgid, IPC_STAT,buf);
printf("Permission changes to : %d \n",  buf->msg_perm.mode); 
return 0;
}
