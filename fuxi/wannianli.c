#include<stdio.h>
int main()
{
		int year=1900,month=0,i,j,day,week,sum=0;
		while(1){
		 if(year<1900||month>12||month<0)
				 printf("对不起您的输入有误\n");
		 else
					  break;
		}
		printf("请输出年和月:");
		scanf("%d%d",&year,&month);
		for(i=1990;i<year;i++){
			if((i%4==0&&i%100!=0)||(i%400==0))
					sum+=366;
			else
					sum+=365;
		}
		for(j=1;j<month;j++){
				switch(month){
						case 1:
						case 3:
						case 5:
                        case 7:
						case 8:
						case 10:
						case 12:
							sum+=31;
							day=31;
							break;
						case 2:
						{
							if((i%4==0&&i%100!=0)||(i%400==0))
									sum+=29;
							else
									sum+=28;
						}
						default :
						       sum+=30;
				}
		}
				sum-=day;
				week=sum%7+1;
						printf("sun\tmon\ttus\twen\tthu\tfri\tsat\n");
				for(i=0;i<week;i++){
						printf(" \t");
				}
				for(i=1;i<=day;i++)
				{		printf("%d\t",i);
				  if((i+week)%7==0)
						  printf("\n");
				}

               printf("\n");
  return 0;


}
