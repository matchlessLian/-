#include<stdio.h>
struct Test
{
	char sex[5];
	char name[20];
	int score;
};
int main()
{
	int num;
	scanf("%d",&num);
	getchar();
	struct Test s[num];
	int i,j;
	for(i=0;i<num;i++)
	{
		gets(s[i].sex);
		gets(s[i].name);
		scanf("%d",&s[i].score);
		getchar();
	}
	struct Test temp[1];
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(s[j].score>s[i].score)
			{
				temp[0]=s[j];
				s[j]=s[i];
				s[i]=temp[0];
			}
		}
	}
	for(i=0;i<num;i++)
	{
		printf("%s\t%s\t%d\n",s[i].sex,s[i].name,s[i].score);
	}
	return 0;
}
