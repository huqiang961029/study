#include<stdio.h>
int main()
{
	double a=0,b=0;
	char h='g';
	printf("请开始你的计算：");
	scanf("%lf",&a);
	getchar();
	scanf("%c",&h);
	getchar();
	scanf("%lf",&b);
	getchar();
	if(h=='+')
			printf("sum=%lf\n",a+b);
else if(h=='-')
	
		  printf("diff=%.2lf\n",a-b);
	else if(h=='*')

			printf("pro=%.2lf\n",a*b);
	else if(h=='/')
			printf("div=%.2lf\n",a/b);
	else
			printf("对不起计算器没有此功能\n");




   return 0;
}
