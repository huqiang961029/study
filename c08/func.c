#include<stdio.h>
void myadd(float a,float b);


int main()
{
	//	float a=0;
	//	float b=0;
		scanf("%f%f",&a,&b);
	myadd(a,b);

   return 0;
}


void myadd(float a,float b)
{
  printf("%f",a+b);
}
