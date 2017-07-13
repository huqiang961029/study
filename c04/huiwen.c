#include<stdio.h>
#include<math.h>
int main()
{ 
		int num,yu;
 //  int a,j,N;
   printf("请输入一个数:");
   scanf("%d",&num);
 /*  int i=0;{
   for(i=1;i<=N;i++)
{		  j=a%10;
          a/=10; 
		  printf("%d",j);
}
} */

 while (num!=0)
{
		yu=num %10;
		num=num/10;
		printf("%d",yu);
}

    return 0;
}
