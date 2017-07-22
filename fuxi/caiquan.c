#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	char ch1='\0',ch2='\0';
	printf("1-->拳头\n");
	printf("2-->剪刀\n");
    printf("3-->布\n");
/*	scanf("%c",&ch1);
	getchar();
	scanf("%c",&ch2);
*/// 	getchar();
	int a=0,b=0;
	srand((unsigned)time(NULL));
//	srand((unsigned)time(NULL));
    a=rand()%3+1;
	b=rand()%3+1;
	printf("玩家%d\n电脑%d",a,b);
    if(a==b)
			printf("平局");
	else
			printf("谁赢都行");

  return 0;
}
