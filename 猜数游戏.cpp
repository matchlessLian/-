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
	printf("*           欢迎来到猜数游戏！          *\n");
	printf("*        @LiAN              最緟版      *\n");
	printf("*****************************************\n");
	printf("提供有1，2，3种难度，加油哦！\n");
	printf("请选择难度:");
	scanf("%d",&nan_du);
	int ret;
	if(nan_du==1)
	{
		printf("*****************************************\n");
		printf("嘤嘤嘤！\n");
		printf("欢迎来到难度1\n"); 
		printf("*****************************************\n");
		magic=rand()%100+1;
		do
		{
			printf("请输入你想要猜的数字："); 
			ret=scanf("%d",&guess);
			while(ret!=1)
			{
				while(getchar()!='\n');
				printf("请输入数字!!!!!!\n");
				printf("请输入你想要猜的数字：");
				ret=scanf("%d",&guess);
			}
			counter++;
			if(guess>magic)
			{
				printf("Wrong!Too high!\n");
				printf("对不起！太大了！\n"); 
			}
			else if(guess<magic)
			{
				printf("Wrong!Too small!\n");
				printf("对不起！太小了！\n");
			}
			else
			{
				printf("*****************************************\n");
				printf("Oh!you're right!\n");
				printf("噢！你真的太棒了！\n");
				printf("*****************************************\n");
			}
		}
		while(guess!=magic);
		{
			if(counter<=5)
			{
				printf("*****************************************\n");
				printf("*              counter=%d               *\n",counter);
				printf("*             你怎么这么棒！            *\n");
				printf("*****************************************\n");
			}
			else if(counter>5&&counter<=10)
			{
				printf("*****************************************\n"); 
				printf("*             counter=%d                *\n",counter);
				printf("*              还不错诶！               *\n");
				printf("*****************************************\n");
			}
			else
			{
				printf("*****************************************\n");
				printf("*              counter=%d               *\n",counter);
				printf("*              要加油哦！               *\n");
				printf("*****************************************\n");
			}
		}
	}
	else if(nan_du==2)
	{
		printf("*****************************************\n");
		printf("呜呜呜，有点强！\n");
		printf("欢迎来到难度2\n");
		printf("*****************************************\n");
		magic=rand()%1000+1;
		do
		{
			printf("请输入你想要猜的数字："); 
			ret=scanf("%d",&guess);
			while(ret!=1)
			{
				while(getchar()!='\n');
				printf("请输入数字!!!!!!!!!!!!!!!!!!!\n");
				printf("请输入你想要猜的数字：");
				ret=scanf("%d",&guess);
			}
			counter++;
			if(guess>magic)
			{
				printf("Wrong!Too high!\n");
				printf("对不起！太大了！\n"); 
			}
			else if(guess<magic)
			{
				printf("Wrong!Too small!\n");
				printf("对不起！太小了！\n");
			}
			else
			{
				printf("*****************************************\n");
				printf("Oh!you're right!\n");
				printf("噢！你真的太棒了！\n");
				printf("*****************************************\n");
			}
		}while(guess!=magic);
		{
			if(counter<=10)
			{
				printf("*****************************************\n");
				printf("*              counter=%d               *\n",counter);
				printf("*             你怎么这么棒！            *\n");
				printf("*****************************************\n");
			}
			else if(counter>10&&counter<=20)
			{
				printf("*****************************************\n"); 
				printf("*             counter=%d                *\n",counter);
				printf("*              还不错诶！               *\n");
				printf("*****************************************\n");
			}
			else
			{
				printf("*****************************************\n");
				printf("*              counter=%d               *\n",counter);
				printf("*              要加油哦！               *\n");
				printf("*****************************************\n");
			}
		}
	}
	else if(nan_du==3)
	{
		printf("*****************************************\n");
		printf("！！               hello！            ！！\n");
		printf("！！          欢迎来到无尽模式        ！！\n");
		printf("！！            这里是难度3           ！！\n");
		printf("*****************************************\n");
			do
			{
				assert(lucky<100);
				magic=rand()%100+1;
				printf("嘤嘤嘤，系统已经刷新池子！\n");
				printf("请输入你想要猜的数字：");
				ret=scanf("%d",&guess);
				while(ret!=1)
				{
					while(getchar()!='\n');
					printf("请输入数字!!!!!!!!!!!!!!!!!!!\n");
					printf("请输入你想要猜的数字：");
					ret=scanf("%d",&guess);
				}
				counter++;
				if(guess>magic)
				{
					printf("*****************************************\n");
					printf("Wrong!Too high!\n");
					printf("对不起！太大了！\n"); 
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
					printf("对不起！太小了！\n");
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
					printf("噢！你真的太棒了！\n");
					printf("*****************************************\n");
				}
			}while(guess!=magic);
			
		{
			if(counter<=1)
			{
				printf("*****************************************\n");
				printf("*               counter=%d              *\n",counter);
				printf("*              无敌的幸运值！           *\n");
				printf("*****************************************\n");
			}
			else if(counter>10&&counter<=20)
			{
				printf("*****************************************\n"); 
				printf("*               counter=%d              *\n",counter);
				printf("*              一般般吧！               *\n");
				printf("*****************************************\n");
			}
			else
			{
				printf("*****************************************\n");
				printf("*               counter=%d              *\n",counter);
				printf("*               倒霉的人！              *\n");
				printf("*****************************************\n");
			}
		}
	}
	else
	{
		printf("*****************************************\n");
		printf("！！！  啊偶！没有与您匹配的难度！  ！！！\n");
		printf("！！！    请输入正确的难度系数！    ！！！\n");
		printf("*****************************************\n");
	}
}
