//通过自写qsort函数理解qsort函数原理 
#include<stdio.h>
//设计函数所需函数 
int my_qsort(void* base,int sz,int size,int(*pcompare)(const void*,const void*));
void swap(char* buffer1,char* buffer2,int width);

//用户使用myqsort需要自定义的函数 
int compare(const void* e1,const void* e2);

//主函数 
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int sz=sizeof(arr)/sizeof(arr[0]);
	my_qsort(arr,sz,sizeof(arr[0]),compare);
	int i=0;
	for(i=0;i<10;i++)
	{
		printf("%d",arr[i]);
	}
}
int compare(const void* e1,const void* e2)
{
	return (*(int*)e1)-(*(int*)e2);
}





void swap(char* buffer1,char* buffer2,int width)
{
	int i=0;
	char temp;
	for(i=0;i<width;i++)
	{
		temp=*buffer1;
		*buffer1=*buffer2;
		*buffer2=temp;
	}
}
int my_qsort(void* base,int sz,int width,int(*pcompare)(const void*,const void*))
{
	int i=0;
	int j=0;
	int ret=0;
	for(i=0;i<sz;i++)
	{
		for(j=0;j=sz-1-i;j++)
		{
			if(compare((char*)base+j*width,(char*)base+(j+1)*width)<0)
			{
				swap((char*)base+j*width,(char*)base+(j+1)*width,width);
			}
		}
	}
}

