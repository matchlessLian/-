#include<stdio.h>
int Area(int n);
int main()
{
	int n;
	scanf("%d",&n);
	int area=Area(n);
	printf("%d",area);
	return 0;
}
int Area(int n)
{
	return n*n;
}
