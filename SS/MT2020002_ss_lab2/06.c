#include <stdio.h>
#include <pthread.h>
void* threadFunction(void* args)
{}
int main()
{
pthread_t id[3];
int ret;
int i;
for(i=0;i<3;i++)
{
ret = pthread_create(&id[i],NULL,&threadFunction,NULL);
if(ret==0){
printf("created successfully thread:%d\n",i+1);
}
else
printf("Thread not created.\n");
}
return 0;
}
