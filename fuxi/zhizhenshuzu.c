#include<stdio.h>
int main()
{
	int a[5]={0};
	int *p=a;
	int i=0;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		while(getchar()!='\n');
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",*p+i);

	}
      putchar('\n');
   return  0;
}
