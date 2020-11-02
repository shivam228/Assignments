#include<stdio.h>
#include<time.h>
int main()
{
pid_t pid;
clock_t beg,end;
beg = clock();
pid = getpid();
end = clock();
printf("time taken:%ld\n",end - beg);
return 0;
}

