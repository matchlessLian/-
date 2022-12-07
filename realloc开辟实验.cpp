#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	int* p=(int*)malloc(10*sizeof(int));
	printf("开辟空间p\n");
	printf("p=%p\n",p);
	
	printf("向p里面存储\n");
	
	for(i=0;i<10;i++)
	{
		*(p+i)=i;
		printf("%d\t",*(p+i));
	}printf("\n");
	
	int* p3=(int*)realloc(p,10000);
	printf("增大原来p的内存，获得新的地址\n");
	printf("p3=%p\n",p3);
	printf("我们来打印一下原来p里面的内容\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",*(p+i));
	}printf("\n");
	printf("现在把p3赋给p,下面是p里面存储的地址\n");
	if(p3!=NULL)
	{
		p=p3;
	}
	printf("p=%p\n",p);
	printf("下面是p3里面的内容\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",*(p3+i));
		
	}printf("\n");
	printf("下面是p里面的内容\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",*(p+i));
		
	}printf("\n");
	free(p);

	printf("我们释放了p，观察p中的内容\n"); 
	for(i=0;i<10;i++)
	{
		printf("%d\t",*(p+i));
		
	}printf("\n");
	printf("再观察观察p3的内容\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",*(p3+i));
		
	}printf("\n");
	//printf("&p==%p %p\n",&p,&p3);
	p=NULL;
	
	printf("我们清空指针，观察p与p3\n");
	printf("p3=%p\n",p3);
	printf("p=%p\n",p);
	
	printf("&p==%p %p\n",&p,&p3);
	 for(i=0;i<10;i++)
	{
		
		printf("%d\t",*(p+i));
		
	}printf("\n");
	
	printf("这里是p3了\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",*(p3+i));
		
	}printf("\n");

 } 

	
