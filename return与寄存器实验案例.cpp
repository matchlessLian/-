#include <stdio.h>
int fact(int n);
int main( )
{
    int n,i;  
    int s=0;
    scanf("scanf�����ֵ%d",&n);
    printf("s=%d\n",s);
    s=fact(n);
    printf("s=%d\n",s);
   printf("���������ֵ%d\n",s);   
   return 0;
}
int fact(int n)
{
	int i;
	int fact=0;
	int exchange=1;
	for(i=1;i<=n;i++)
	{
		exchange*=i;
		fact+=exchange;
		printf("n=%d\n",n);
		printf("fact=%d\n",fact);
	}
	printf("fact=%d\n",fact);
	//return fact;
}


