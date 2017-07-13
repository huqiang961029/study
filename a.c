#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
		srand((unsigned)time(NULL));
		int index_2=0,index_1=0;;
		printf("1拳头\n");
		printf("2剪刀\n");
		printf("3布\n");
		index_1 =rand()%3 + 1;
		index_2 =rand()%3 + 1;
		switch(index_1){
				case 1:
					printf("电脑:拳头\n");
					break;
				case 2:
					printf("电脑:剪刀\n");
					break;
                case 3:
					printf("电脑:布\n");
					break;
		             }
		
		switch(index_2){
				case 1:
					printf("玩家:拳头\n");
					break;
				case 2:
					printf("玩家:剪刀\n");
					break;
                case 3:
					printf("玩家:布\n");
					break;
		             }
		if(index_1==index_2)
				printf("你们猜拳一样\n");
		 else if(index_1==1&&index_2==2)
				 printf("电脑获胜\n");
		 else if(index_1==1&&index_2==3)
				 printf("玩家获胜\n");
		 else if(index_1==2&&index_2==1)
				 printf("玩家获胜\n");
		 else if(index_1==2&&index_2==3)
				 printf("电脑获胜\n");
		 else if(index_1==3&&index_2==1)
				 printf("电脑获胜\n");
		 else if(index_1==3&&index_2==2)
				 printf("玩家获胜\n");
	     else 
				 printf("平局");
		return 0;
}
