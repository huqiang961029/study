#include<stdio.h>
int  myhw(int *a,int size);
int main()
{ 
	int a[10]={0};
	int i=0;
	for(i=0;i<10;i++){
	    scanf("%d",&a[i]);
	}
	  int hu=myhw(a,10);
	  if(hu==0)
			  printf("不是回文数\n");
	  else
			  printf("是回文数\n");

   return 0;
}

int myhw(int *a,int size)
{
  int i=0;
  for(i=0;i<size/2;i++){
		  if(a[i]!=a[size-i-1])
		  {
		    return 0;
		  }
    return 1;
    }
}
