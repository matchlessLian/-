#include<stdio.h>
int Add(int x,int y);
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int (*pAdd)(int,int)=&Add;
	printf("%d",(*pAdd)(a,b)); 
}
int Add(int x,int y)
{
	return x+y;
}
