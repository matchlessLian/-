#include<stdio.h>
#include<string.h>
int test(int a[]);
int main()
{
	int arr[3]={1,2,3};
	//printf("%d\n",*arr);
	printf("%d\n",sizeof(arr));
	/*char* p=arr;
	printf("%d\n",sizeof(p));*/
	//arr++;
	test(arr);
 }
int test(int arr[])
{
	arr++;
	printf("%d\n",*arr);
}
