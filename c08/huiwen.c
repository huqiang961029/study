/*#include<stdio.h>
void  mybian(int *a,int *b);
int main()
{
	int a=0;
	int b=0;
	scanf("%d%d",&a,&b);
	mybian(&a,&b);
	printf("%d\t%d",a,b);


  return 0;
}

void mybian(int *a,int *b){
		int t;
		t=*a;
		*a=*b;
		*b=t;
}*/


#include<stdio.h>
#include<stdlib.h>
int huiwen(int *a,int size);
int main()
{
	int a[10]={1,2,3,4,6,6,4,3,2,1};
	   huiwen(a,10);


  return 0;
}
int huiwen(int *a,int size)
{
		int i=0;
		for(i=0;i<size/2;i++){
			if(a[i]!=a[size-i-1]){
					printf("不是回文\n");
					return 0;
			}
    }
		printf("是回文\n");
}
