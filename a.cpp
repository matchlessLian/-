#include <stdio.h> 
int main()
{
	/*char arr1[]="abcdef";
	char arr2[]="abcdef";*/
	const char* p1="abcdef";
	const char* p2="abcdef";
	/*if(arr1==arr2)
	{
		printf("���");
	
	}
	else
	{
		printf("�����");
	}*/
	if(p1==p2)
	{
		printf("���"); 
	 }
	 else
	 {
	 	printf("�����");
	 }
  return 0;
}
