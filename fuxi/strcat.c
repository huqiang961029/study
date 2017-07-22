#include<stdio.h>
#include<string.h>
void mycat(char *a,char *b);
int main()
{
	char a[15]="huqi";
	char b[15]="ang";
	mycat(a,b);
	printf("%s",a);




   return 0;
}
void mycat(char *a,char *b)
{
  int i=0;
  int j=0;
  for(i=0;i<15;i++){
		 // a[i]=getchar();
		  if(a[i]!='\0')
		  continue;
		  else
		  {
		  for(j=0;j<115;j++){
				  a[i]=b[j];
				  i++;
		  }
		  }
  }

       return a;
}
