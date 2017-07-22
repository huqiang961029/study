#include<stdio.h>
#include<string.h>
void mygets(char *a,int size);
int mylen(char *a);
int main()
{
	char a[15]={'\0'};
	char b[15]={'\0'};
	mygets(a,15);
//	while(getchar()!='\n');
	mygets(b,15);
	
//	while(getchar()!='\n');
     int c = mylen(a);
	 int d = mylen(b);
	 printf("%d%d",c,d);
	 return 0;
 // int c=  strcmp(a,b);
//	printf("%d",c);
 /*   if(mylen(a,15)!=mylen(b,15)){
			printf("字符串长度不同\n");
	}
	else
	{
			int c=strcmp(a,b);
	        printf("%d",c);
	}*/
}


void mygets(char *a,int size)
{
   int i=0;
   for(i=0;i<size;i++){
		   a[i]=getchar();
		   if(a[i]=='\n')
				   break;
   }
      a[i]='\0';
	  if(i==size-1)
			  while(getchar()!='\n');
}
int mylen (char *a)
{
   int i=0;
   while(1){
	 if(a[i]!='\0'){
			 i++;
	 }
	 else
	 {
		break;
	 }
   }
   return i;
}
