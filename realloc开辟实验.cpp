#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* p=(int*)malloc(10*sizeof(int));
	printf("%p\n",p);
	int* p2=(int*)realloc(p,80);
	printf("%p\n",p2);
	int* p3=(int*)realloc(p,10000);
	printf("%p\n",p3);
 } 
