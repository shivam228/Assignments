#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <time.h>
#include <sys/msg.h>
#include <sys/types.h>
int main()
{
int id;
key_t key;
struct msqid_ds msq;
key  = ftok("2.c",'a');
id = msgget(key,IPC_CREAT|IPC_EXCL|0777);
msgctl(id, IPC_STAT, &msq);
printf ("Access permissions = 0%o\n",msq.msg_perm.mode);
printf (" USER ID : %d\n",msq.msg_perm.uid);
printf ("GROUP ID : %d\n",msq.msg_perm.gid);
printf ("Time of last msg sent: %s\n",ctime(&msq.msg_stime));
printf ("Time of last msg receive : %s\n",ctime(&msq.msg_rtime));
printf ("Time of last msg change : %s\n",ctime(&msq.msg_ctime));
printf ("Current number of bytes in queue : %lu\n",msq.__msg_cbytes);
printf ("Current number of messages in queue : %lu\n",msq.msg_qnum);
printf ("Maximum number of bytes allowed  : %lu\n",msq.msg_qbytes);
printf ("Pid of last message sent : %d\n",msq.msg_lspid);
printf ("Pid of last message received : %d\n",msq.msg_lrpid);
return 0;
}
