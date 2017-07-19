#include<stdio.h>
void mygets(char *str,int size);
int main()
{
	char a[20]={'\0'};
//	char b[20]={'\0'};
	mygets(a,20);
//	while(getchar()!='\n');
//	mygets(b,4);
	printf("%s",a);



  return 0;
}
void mygets(char *str,int size)
{
		int i=0;
	for(i=0;i<size-1;i++){
		str[i]=getchar();
		if(str[i]=='\n'){
				break;
		}
	}
	    str[i]='\0';
   if(i==size-1)
   {
		   while(getchar()!='\n');
   }



}
