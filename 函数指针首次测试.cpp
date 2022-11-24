#include<stdio.h>
int Add(int x,int y);
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int (int,int)(*pAdd)=&Add;
	printf("%d",(*pAdd)(a,b)); 
}
int Add(int x,int y)
{
	return x+y;
}
