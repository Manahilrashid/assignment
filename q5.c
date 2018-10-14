#include <stdio.h>
void main()
{
	int i;
	for (i=0;i<4;i++)
   	{	
		fork();
      	printf("Hello!!");
   	}
   	printf("Exist!!");
}
