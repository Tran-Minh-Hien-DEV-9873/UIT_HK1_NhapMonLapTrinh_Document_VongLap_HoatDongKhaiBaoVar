#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("---------------------------------Cach 1--------------------------------------------------- \n");
	int i; 
	for(i=1;i<=3;i++)
	{
		printf("%d",i);
		
	}
	printf("i=%d \n",i);
	printf("---------------------------------End Cach 1--------------------------------------------------- \n");
	
	printf("---------------------------------Cach 2--------------------------------------------------- \n");
	for(int i=1;i<=3;i++)
	{
		printf("%d \n",i);
		
	}
	printf("---------------------------------End Cach 2--------------------------------------------------- \n");
	return 0;
}

