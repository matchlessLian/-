#include <stdio.h> 
int main()
{
	/*char arr1[]="abcdef";
	char arr2[]="abcdef";*/
	const char* p1="abcdef";
	const char* p2="abcdef";
	/*if(arr1==arr2)
	{
		printf("相等");
	
	}
	else
	{
		printf("不相等");
	}*/
	if(p1==p2)
	{
		printf("相等"); 
	 }
	 else
	 {
	 	printf("不相等");
	 }
  return 0;
}
