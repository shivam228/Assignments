#include<stdio.h>
#include<time.h>
int main()
{
pid_t pid;
int n=100;
clock_t beg,end;
beg = clock();
while(n>0)
{
pid = getppid();
n--;
}
end = clock();
printf("time taken in seconds:%lld\n",end - beg);
return 0;
}
