#include<stdio.h>
int main()
{ 
	int i=0,a=0,sum=0,sun=0;
	printf("请输入十个数:");
	for(i=1;i<11;i++){
	   scanf("%d",&a);
	   if(a>0)
		sum+=a;
	   else
		sun+=a;
	}
	printf("正数和:%d负数和%d\n",sum,sun);



    return  0;
}
