#include<stdio.h>
struct A
{
	int a;
	char b;
	double c;
 };
int main()
{
	struct A str;
	str.a=100; 
	str.b='w';
	str.c=10.10;
	printf("%d\n%c\n%lf\n",str.a,str.b,str.c);
	return 0;
}
