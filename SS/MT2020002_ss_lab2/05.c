#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
int main() {
printf("Maximum arguments: %ld\n", sysconf(_SC_ARG_MAX));
printf("No of simuntaneous process: %ld\n", sysconf(_SC_CHILD_MAX));
printf("No od clock ticks: %ld\n", sysconf(_SC_CLK_TCK));
printf("Max no of open files: %ld\n", sysconf(_SC_OPEN_MAX));
printf("page size: %ld\n", sysconf(_SC_PAGESIZE));
printf("No of pages: %ld\n", sysconf(_SC_PHYS_PAGES));
printf("No of available pages: %ld\n", sysconf(_SC_AVPHYS_PAGES));
return 0;
}
