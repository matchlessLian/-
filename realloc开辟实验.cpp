#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	int* p=(int*)malloc(10*sizeof(int));
	printf("���ٿռ�p\n");
	printf("p=%p\n",p);
	
	printf("��p����洢\n");
	
	for(i=0;i<10;i++)
	{
		*(p+i)=i;
		printf("%d\t",*(p+i));
	}printf("\n");
	
	int* p3=(int*)realloc(p,10000);
	printf("����ԭ��p���ڴ棬����µĵ�ַ\n");
	printf("p3=%p\n",p3);
	printf("��������ӡһ��ԭ��p���������\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",*(p+i));
	}printf("\n");
	printf("���ڰ�p3����p,������p����洢�ĵ�ַ\n");
	if(p3!=NULL)
	{
		p=p3;
	}
	printf("p=%p\n",p);
	printf("������p3���������\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",*(p3+i));
		
	}printf("\n");
	printf("������p���������\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",*(p+i));
		
	}printf("\n");
	free(p);

	printf("�����ͷ���p���۲�p�е�����\n"); 
	for(i=0;i<10;i++)
	{
		printf("%d\t",*(p+i));
		
	}printf("\n");
	printf("�ٹ۲�۲�p3������\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",*(p3+i));
		
	}printf("\n");
	//printf("&p==%p %p\n",&p,&p3);
	p=NULL;
	
	printf("�������ָ�룬�۲�p��p3\n");
	printf("p3=%p\n",p3);
	printf("p=%p\n",p);
	
	printf("&p==%p %p\n",&p,&p3);
	 for(i=0;i<10;i++)
	{
		
		printf("%d\t",*(p+i));
		
	}printf("\n");
	
	printf("������p3��\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",*(p3+i));
		
	}printf("\n");

 } 

	
