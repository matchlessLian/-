#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
#include<windows.h>
#include<assert.h> 
int main()
{
	int guess;
	int magic;
	int counter;
	int lucky;
	srand(time(NULL));
	int nan_du;
	counter=0;
	lucky=0;
	printf("*****************************************\n");
	printf("* welcome to the games of guess number! *\n");
	printf("*           ��ӭ����������Ϸ��          *\n");
	printf("*        @LiAN              ���      *\n");
	printf("*****************************************\n");
	printf("�ṩ��1��2��3���Ѷȣ�����Ŷ��\n");
	printf("��ѡ���Ѷ�:");
	scanf("%d",&nan_du);
	int ret;
	if(nan_du==1)
	{
		printf("*****************************************\n");
		printf("�����ӣ�\n");
		printf("��ӭ�����Ѷ�1\n"); 
		printf("*****************************************\n");
		magic=rand()%100+1;
		do
		{
			printf("����������Ҫ�µ����֣�"); 
			ret=scanf("%d",&guess);
			while(ret!=1)
			{
				while(getchar()!='\n');
				printf("����������!!!!!!\n");
				printf("����������Ҫ�µ����֣�");
				ret=scanf("%d",&guess);
			}
			counter++;
			if(guess>magic)
			{
				printf("Wrong!Too high!\n");
				printf("�Բ���̫���ˣ�\n"); 
			}
			else if(guess<magic)
			{
				printf("Wrong!Too small!\n");
				printf("�Բ���̫С�ˣ�\n");
			}
			else
			{
				printf("*****************************************\n");
				printf("Oh!you're right!\n");
				printf("�ޣ������̫���ˣ�\n");
				printf("*****************************************\n");
			}
		}
		while(guess!=magic);
		{
			if(counter<=5)
			{
				printf("*****************************************\n");
				printf("*              counter=%d               *\n",counter);
				printf("*             ����ô��ô����            *\n");
				printf("*****************************************\n");
			}
			else if(counter>5&&counter<=10)
			{
				printf("*****************************************\n"); 
				printf("*             counter=%d                *\n",counter);
				printf("*              ����������               *\n");
				printf("*****************************************\n");
			}
			else
			{
				printf("*****************************************\n");
				printf("*              counter=%d               *\n",counter);
				printf("*              Ҫ����Ŷ��               *\n");
				printf("*****************************************\n");
			}
		}
	}
	else if(nan_du==2)
	{
		printf("*****************************************\n");
		printf("�����أ��е�ǿ��\n");
		printf("��ӭ�����Ѷ�2\n");
		printf("*****************************************\n");
		magic=rand()%1000+1;
		do
		{
			printf("����������Ҫ�µ����֣�"); 
			ret=scanf("%d",&guess);
			while(ret!=1)
			{
				while(getchar()!='\n');
				printf("����������!!!!!!!!!!!!!!!!!!!\n");
				printf("����������Ҫ�µ����֣�");
				ret=scanf("%d",&guess);
			}
			counter++;
			if(guess>magic)
			{
				printf("Wrong!Too high!\n");
				printf("�Բ���̫���ˣ�\n"); 
			}
			else if(guess<magic)
			{
				printf("Wrong!Too small!\n");
				printf("�Բ���̫С�ˣ�\n");
			}
			else
			{
				printf("*****************************************\n");
				printf("Oh!you're right!\n");
				printf("�ޣ������̫���ˣ�\n");
				printf("*****************************************\n");
			}
		}while(guess!=magic);
		{
			if(counter<=10)
			{
				printf("*****************************************\n");
				printf("*              counter=%d               *\n",counter);
				printf("*             ����ô��ô����            *\n");
				printf("*****************************************\n");
			}
			else if(counter>10&&counter<=20)
			{
				printf("*****************************************\n"); 
				printf("*             counter=%d                *\n",counter);
				printf("*              ����������               *\n");
				printf("*****************************************\n");
			}
			else
			{
				printf("*****************************************\n");
				printf("*              counter=%d               *\n",counter);
				printf("*              Ҫ����Ŷ��               *\n");
				printf("*****************************************\n");
			}
		}
	}
	else if(nan_du==3)
	{
		printf("*****************************************\n");
		printf("����               hello��            ����\n");
		printf("����          ��ӭ�����޾�ģʽ        ����\n");
		printf("����            �������Ѷ�3           ����\n");
		printf("*****************************************\n");
			do
			{
				assert(lucky<100);
				magic=rand()%100+1;
				printf("�����ӣ�ϵͳ�Ѿ�ˢ�³��ӣ�\n");
				printf("����������Ҫ�µ����֣�");
				ret=scanf("%d",&guess);
				while(ret!=1)
				{
					while(getchar()!='\n');
					printf("����������!!!!!!!!!!!!!!!!!!!\n");
					printf("����������Ҫ�µ����֣�");
					ret=scanf("%d",&guess);
				}
				counter++;
				if(guess>magic)
				{
					printf("*****************************************\n");
					printf("Wrong!Too high!\n");
					printf("�Բ���̫���ˣ�\n"); 
					printf("*****************************************\n");
					if((guess-magic<=5&&guess-magic>=0)||(guess-magic>=-5&&guess-magic<=0))
					{
						lucky=lucky+5;
					}
					else if((guess-magic<=20&&guess-magic>=0)||(guess-magic>=-20&&guess-magic<=0))
					{
						lucky=lucky+2;
					}
					else
					{
						lucky=lucky+1;
					}
				}
				else if(guess<magic)
				{
					printf("*****************************************\n");
					printf("Wrong!Too small!\n");
					printf("�Բ���̫С�ˣ�\n");
					printf("*****************************************\n");
					if((guess-magic<=5&&guess-magic>=0)||(guess-magic>=-5&&guess-magic<=0))
					{
						lucky=lucky+5;
					}
					else if((guess-magic<=20&&guess-magic>=0)||(guess-magic>=-20&&guess-magic<=0))
					{
						lucky=lucky+2;
					}
					else
					{
						lucky=lucky+1;
					}
				}
				else
				{
					printf("*****************************************\n");
					printf("Oh!you're right!\n");
					printf("�ޣ������̫���ˣ�\n");
					printf("*****************************************\n");
				}
			}while(guess!=magic);
			
		{
			if(counter<=1)
			{
				printf("*****************************************\n");
				printf("*               counter=%d              *\n",counter);
				printf("*              �޵е�����ֵ��           *\n");
				printf("*****************************************\n");
			}
			else if(counter>10&&counter<=20)
			{
				printf("*****************************************\n"); 
				printf("*               counter=%d              *\n",counter);
				printf("*              һ���ɣ�               *\n");
				printf("*****************************************\n");
			}
			else
			{
				printf("*****************************************\n");
				printf("*               counter=%d              *\n",counter);
				printf("*               ��ù���ˣ�              *\n");
				printf("*****************************************\n");
			}
		}
	}
	else
	{
		printf("*****************************************\n");
		printf("������  ��ż��û������ƥ����Ѷȣ�  ������\n");
		printf("������    ��������ȷ���Ѷ�ϵ����    ������\n");
		printf("*****************************************\n");
	}
}
