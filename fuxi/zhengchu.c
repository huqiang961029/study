#include<stdio.h>
int main()
{ 
	int a;
	printf("请输出一个数:");
	scanf("%d",&a);
	getchar();
	if(a%3==0&&a%5==0){
			printf("能被3和5同时整除\n");
	}
	else if(a%3==0&&a%5!=0){
			printf("能被3整除\n");
	}
	else if(a%3!=0&&a%5==0){
			printf("能被5整除\n");
	}
	else {
			printf("不能被3和5整除\n");
	}

   return 0;
}
