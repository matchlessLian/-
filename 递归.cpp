#include<stdio.h>
int PRINTN(int N);
int main()
{
	int N;
	scanf("%d",&N);
	PRINTN(N);
	return 0;
}
int PRINTN(int N)
{
	if(N>0)
	{
		PRINTN(N-1);
		printf("%d\n",N);
	}
}
