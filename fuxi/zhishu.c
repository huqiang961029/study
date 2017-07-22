#include<stdio.h>
int main()
{
	int i=0,j=0;
	int flag=1;
	for(i=1;i<101;i++){
			int flag=1;
			for(j=2;j<i;j++){
					if(i%j==0){
					flag=0;
					}
			}


					if(1==flag){
							printf("%d\n",i);			
                	}
	}
    return 0;
}
