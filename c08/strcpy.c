#include<stdio.h>
#include<string.h>
void mystrcpy(char *a,char *b);
int main()
{
   char a[20]="qiang";
   char b[20]="hu";
   mystrcpy(a,b);
   printf("%s\t%s",a,b);



   return 0;
}

void mystrcpy(char *a,char *b)
{
	int i=0;
//	char *p=b;
//	     *a=*p;
	if(strlen(b)>strlen(a)){
	for(i=0;i<(strlen(b));i++){
			a[i]=b[i];
	}
	}
	else
	for(i=0;i<(strlen(a));i++){
			a[i]=b[i];
	}

}





