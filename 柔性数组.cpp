//认识柔性数组 
/*#include<stdio.h>
struct S
{
	int a;
	int arr[];
}; 
int main()
{
	struct S s;
	printf("%d\n",sizeof(s.arr));
	printf("%d\n",sizeof(s));
}*/
#include<stdio.h>
#include<stdlib.h>
struct Test
{
	int n;
	int arr[];
};
int main()
{
	struct Test A;
	struct Test* ptest;
	A.n =2;
	printf("%d\n",A.n );
	ptest=(struct Test*)malloc(sizeof(struct Test)+6*sizeof(int));
	if(ptest!=NULL)
	{
		int  i;
		for(i=0;i<6;i++)
		{
			ptest->arr[i] =i;
			printf("%d\t",ptest->arr[i] );
		}
	}
	ptest->n =666;
	printf("%d\n",ptest->n );
	
}
