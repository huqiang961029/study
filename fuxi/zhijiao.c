#include<stdio.h>
int main()
{
	int i=0,j=0,k=0,a=0;
	printf("输入数字得到菱形:");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
			for(j=1;j<=a-i;j++)
					printf(" ");
			for(k=1;k<=i;k++)
			     printf(" *");
			printf("\n");
	}
	for(i=(a-1);i>=1;i--){
			for(j=a-i;j>=1;j--)
					printf(" ");
			for(k=i;k>=1;k--)
					printf(" *");
             printf("\n");
	}

       return 0;
}
