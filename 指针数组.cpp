#include<stdio.h>
int main()
{
	int a=1;
	int b=2;
	int c=3;
	int d=4;
	int* arr[4]={&a,&b,&c,&d};
	for(int i=0;i<4;i++)
	{
		printf("%d\n",*arr[i]);
	}
	return 0;
 } 
