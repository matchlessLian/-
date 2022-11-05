#include<stdio.h>
#include<stdlib.h>
int ordernumbers(int* p);
int main( )
{
   int a[5];
   for(int i=0; i<5; i++)
       {
	   scanf("%d", &a[i]);
	   }
	ordernumbers(&a[0]);
   for(int i=0; i<5; i++) 
       printf("%d ", a[i]);
   return 0;
}
int ordernumbers(int* a)
{
	int temp;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(a[i]>a[j])
			{
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
			}
		}
	}
}
