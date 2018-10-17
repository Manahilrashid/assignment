#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
int arr[1000];
int chunk=100;
void * add(void *b)
{
	int sum=0;
	int start=(int) b;
	for(int i=start;i<end;i++){
		sum=sum+arr[i];
	}
	return ((void*)sum);
}
int main()
{
	pthread_t t[10];
	int s[10];
	for(int j=0;j<1000;j++){
		arr[j]=j+1;
	}
	for(int i=0;i<10;i++){
		pthread_create(&t[i],NULL,add,(void*)(i*chunk);
	}
	for(int k=0;k<10;k++){
		pthread_join(t[k],(void**) & s[k]);
	}
	int sum=(int)s[0],(int)s[1],(int)s[2],(int)s[3],(int)s[4],(int)s[5],(int)s[6],(int)s[7],(int)s[8],(int)s[9];
	printf("\nSum %d\n",sum);
	return 0;
}