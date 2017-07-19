#include<stdio.h>
int changdu(char *a);
int main()
{
 char arr[10]="hellowode";
 int a= changdu(arr);
 printf("%d",a);


   return 0;
}

int changdu(char *a){
		int count=0;
		int sum=0;
		while(1){
		if(a[count]!='\0'){
				sum+=1;
				count++;

		}
		else
		{
				break;
		}
		}

	//	printf("%d",sum);
		  return sum;
}
