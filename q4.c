#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>

int sum(int a[],int start, int end){
	int x = 0;
	for(int i = start; i < end; i++){
		x += s[i];
	}
	return x;
}
int main()
{
	int x[2],x1[2],x2[2],x3[2],x4[2],x5[2],x6[2],x7[2],x8[2],x9[2];
	p(x);
	p(x1); 
	p(x2); 
	p(x3); 
	p(x4); 
	p(x5); 
	p(x6); 
	p(x7); 
	p(x8); 
	p(x9);
	int arr[1000];	
	int sum = 0, sum1 = 0, sum2 = 0;

		
	for(int i = 0; i < 1000; i++){
	arr[i] =rand()% 99 + 1;
	}
		
	int a = fork();
	if(a == 0){
		sum = sum(arr ,0, 100);		
		write(x[1], &sum, sizeof(sum));
        	close(x[1]);
		exit(0);
	}
	else{
		int a1 = fork();
		if(a1 == 0){
		sum = sum(arr ,100, 200);
		write(x1[1], &sum, sizeof(sum));
        	close(x1[1]);
		exit(0);
		}
		else{
		int a2 = fork();
		if(a2 == 0){
		sum = sum(arr ,200, 300);	
		write(x2[1], &sum, sizeof(sum));
        	close(x2[1]);
		exit(0);
		}
		else{
		int a3 = fork();
		if(a3 == 0){
		sum = sum(arr ,300, 400);	
		write(x3[1], &sum, sizeof(sum));
        	close(x3[1]);
		exit(0);
		}
		else{
		int a4 = fork();
		if(a4 == 0){
		sum = sum(arr ,400, 500);	
		write(x4[1], &sum, sizeof(sum));
        	close(x4[1]);
		exit(0);
		}
		else{
		int a5 = fork();
		if(a5 == 0){
		sum = sum(arr ,500, 600);
		write(x5[1], &sum, sizeof(sum));
        	close(x5[1]);
		exit(0);
		}
		else{
		int a6 = fork();
		if(a6 == 0){
		sum = sum(arr ,600, 700);	
		write(x6[1], &sum, sizeof(sum));
        	close(x6[1]);
		exit(0);
		}
		else{
		int a7 = fork();
		if(a7 == 0){
		sum = sum(arr ,700, 800);	
		write(x7[1], &sum, sizeof(sum));
        	close(x7[1]);
		exit(0);
		}
		else{
		int a8 = fork();
		if(a8 == 0){
		sum = sum(arr ,800, 900);	
		write(x8[1], &sum, sizeof(sum));
        	close(x8[1]);
		exit(0);
		}
		else{
		int a9 = fork();
		if(a9 == 0){
		sum = sum(arr ,900, 1000);	
		write(x9[1], &sum, sizeof(sum));
        	close(x9[1]);
		exit(0);
		}
		else{
		
		wait(NULL);
		wait(NULL);
		wait(NULL);
		wait(NULL);
		wait(NULL);
		wait(NULL);
		wait(NULL);
		wait(NULL);
		wait(NULL);
		wait(NULL);
	      
	
		read(x9[0], &sum1, sizeof(sum1));
		sum2 = sum2 + sum1;
		sum1 = 0;
        	close(x9[0]);
		read(x8[0], &sum1, sizeof(sum1));
		sum2 = sum2 + sum1;
		sum1 = 0;
        	close(x8[0]);
		read(x7[0], &sum1, sizeof(sum1));
		sum2 = sum2 + sum1;
		sum1 = 0;
        	close(x7[0]);
		read(x6[0], &sum1, sizeof(sum1));
		sum2 = sum2 + sum1;
		sum1 = 0;
       		close(x6[0]);
		read(x5[0], &sum1, sizeof(sum1));
		sum2 = sum2 + sum1;
		sum1 = 0;
        	close(x5[0]);
		read(x4[0], &sum1, sizeof(sum1));
		sum2 = sum2 + sum1;
		sum1 = 0;
        	close(x4[0]);
		read(x3[0], &sum1, sizeof(sum1));
		sum2 = sum2 + sum1;
		sum1 = 0;
       		close(x3[0]);
		read(x2[0], &sum1, sizeof(sum1));
		sum2 = sum2 + sum1;
		sum1 = 0;
        	close(x2[0]);
		read(x1[0], &sum1, sizeof(sum1));
		sum2 = sum2 + sum1;
		sum1 = 0;
        	close(x1[0]);
		read(x[0], &sum1, sizeof(sum1));
		sum2 = sum2 + sum1;
		sum1 = 0;
        	close(x[0]);
        	
		}
		}	
 		}
		}
		}
		}
		}
		}
		}
		}
		printf("Sum of the array : ", sum2);	
		return 0;	
}