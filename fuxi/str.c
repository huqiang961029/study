#include<stdio.h>
#include<string.h>
void mygets(char *a,int size);
int mylen(char *a);
int main()
{
		char arr[20]={'\0'};   //自定义输出字符串
		mygets(arr,20);
		printf("%s",arr);
       int c= mylen(arr);
	   printf("%d",c);
         return 0;
}
   /* char arr[20]={'\0'};
	int i=0;
	for(i=0;i<20;i++){
			arr[i]=getchar();
			if(arr[i]=='\n'){
					break;
			}
	}
	   arr[i]='\0';
	   if(i==19)
		while(getchar()!='\n');
	  printf("%s\n",arr);
	int c=strlen(arr);
	   arr[i]='\0';
	printf("%d\n",c);

   return 0;
}*/

void mygets(char *a,int size)
{ 
    int i=0;      //自定义字符串的输出
   for(i=0;i<size;i++)
   {  
	   a[i]=getchar();
	   if(a[i]=='\n'){
			break;
        }
   }
     a[i]='\0';
	   if(i==(size-1))
		  while(getchar()!='\n');
    // printf("%s",a);
	}


int  mylen(char *a)
{
	int i=0;      //自定义字符串长度
	while(1){
		if(a[i]!='\0'){
				i++;
				}
		else{
				break;
	}
	}


    return i;


}
