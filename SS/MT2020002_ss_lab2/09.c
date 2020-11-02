#include <stdio.h>
#include <signal.h>
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include <stdlib.h>
int main() 
{	
signal(SIGINT, SIG_IGN);
printf("Igonoring signal after pressing ctrl+c\n");
sleep(5);
printf("reset mode to default ctrl+c will terminate the process\n");
signal(SIGINT, SIG_DFL);
sleep(15);
return 0;
}
