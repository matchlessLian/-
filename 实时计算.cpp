#include<stdio.h>
int MaxSum_shishijisuan(int List[,int N]);
int main()
{
	
}
int MaxSum_shishijisuan(int List[,int N])
{
	int i;
	int ThisSum,MaxSum;
	ThisSum=MaxSum=0;
	for(i=0;i<N;i++)
	{
		ThisSum+=List[i];
		if(ThisSum>MaxSum)
		{
			MaxSum=ThisSum;
		}
		else if(ThisSum<0)
		{
			ThisSum=0;
		}
	}
	return MaxSum;
}
