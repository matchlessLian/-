#include<stdio.h>
#include<stdlib.h>
#define N 30
typedef struct date
{
	int year;
	int month;
	int day;
}DATE;
typedef struct student
{
	long studentID;
	char studentName[10];
	char studentSex;
	DATE birthday;
	int score[4];
	float aver;
}STUDENT;
int InputScore(STUDENT stu[],int n,int m);
int AverScore(STUDENT stu[],int n,int m);
int WritetoFile(STUDENT stu[],int n,int m);
int main()
{
	STUDENT stu[N];
	int n;
	printf("How many student?");
	scanf("%d",&n);
	InputScore(stu,n,4);
	AverScore(stu,n,4);
	WritetoFile(stu,n,4);
	return 0;
}
int InputScore(STUDENT stu[],int n,int m)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("Input record %d:\n",i+1);
		scanf("%ld",&stu[i].studentID);
		scanf("%s",&stu[i].studentName);
		scanf(" %c",&stu[i].studentSex);
		scanf("%d",&stu[i].birthday.year);
		scanf("%d",&stu[i].birthday.month);
		scanf("%d",&stu[i].birthday.day);
		for(j=0;j<m;j++)
		{
			scanf("%d",&stu[i].score[j]);
		}
	}
}
int AverScore(STUDENT stu[],int n,int m)
{
	int i,j,sum[N];
	for(i=0;i<n;i++)
	{
		sum[i]=0;
		for(j=0;j<m;j++)
		{
			sum[i]=sum[i]+stu[i].score[j];
		}
		stu[i].aver= (float)sum[i]/m;
	}
}
int WritetoFile(STUDENT stu[],int n, int m)
{
	FILE *fp;
	int i,j;
	if((fp=fopen("score.txt","w"))==NULL)
	{
		printf("Fail to open score.txt!\n");
		exit(0);
	}
	for (i=0;1<n;i++)
	{
		fprintf(fp,"%10ld%8s%3c%6d/%02d/%02d",stu[i].studentID,
				stu[i].studentName,
				stu[i].studentSex,
				stu[i].birthday.year,
				stu[i].birthday.month,
				stu[i].birthday.day);
				for(j=0;j<m;j++)
				{
					fprintf(fp,"%4d",stu[i].score[j]);
				}
				fprintf(fp,"%6.1f\n",stu[i].aver);
	}
}
