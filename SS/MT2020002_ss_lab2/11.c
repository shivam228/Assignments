#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
struct sigaction sig;
sig.sa_flags = 0;
sig.sa_handler = SIG_IGN;
sigaction(SIGINT, &sig, NULL);
printf("Pressing Ctrl+C will not terminate the process\n");
sleep(5);
sig.sa_handler = SIG_DFL;
sigaction(SIGINT, &sig, NULL);
printf("Pressing Ctrl+C will terminate the process\n");
sleep(10);
return 0;
}
