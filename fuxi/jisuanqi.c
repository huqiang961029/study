#include<stdio.h>
int main()
{ 
   float a=0,b=0;
   char ch='\0';
   printf("亲输入你的运算:");
   scanf("%f%c%f",&a,&ch,&b);
   switch(ch){
   		case '+':
				printf("和为%f\n",a+b);break;
		case '-':
				printf("差为%f\n",a-b);break;
        case '*':
			    printf("乘积为%f\n",a*b);break;
		case '/':
				printf("商为%f\n",a/b);break;
		default :
				printf("你的输入有误\n");break;
   }




   return 0;
}
