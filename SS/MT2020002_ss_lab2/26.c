#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <string.h>

struct buffer {
    long m_type;
    char message[80];
} msg;

int main()
{   
int size;
key_t key;
int msgid;
key = ftok("6.c",'a');
msgid = msgget(key, 0777 | IPC_CREAT);
msg.m_type = 2;
printf("Write Data to be send to mesage queue : ");
scanf(" %[^\n]",msg.message);
size = strlen(msg.message);
msgsnd(msgid, &msg,size+1, 0);
printf("Data send to message queue : %s \n", msg.message);
return 0;
}
