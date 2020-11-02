#include <stdio.h>
#include <pthread.h>
pthread_t tid[3];
void* threadFunction(void* args)
{
printf("thread id = %lu\n", pthread_self());
}
int main()
{
int ret;
int i;
for(i=0;i<3;i++)
{
ret = pthread_create(&tid[i],NULL,&threadFunction,NULL);
if(ret==0){
printf("created successfully thread:%d\n",i+1);
}
else
printf("Thread not created.\n");
}
return 0;
}
