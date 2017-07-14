#include<stdio.h>
int main()
{ 
  int i,year=1900,month=0,sum=0;
  printf("请输入年和日:");
  scanf("%d%d",&year,&month);
  while(1){
		  if(year<1900||month<1||month>122)
		    { 	  printf("输入有误\n");
		           break;
		    }
		  else
		  { printf("\n");
		    break;
		  }
  }
  for(i=1;i<year;i++){
		  if((i%4==0&&i%100!=0)||i%400==0)
				  sum+=366;
		  else
				  sum+=365;
  }
     int day=0;
  for(i=1;i<=month;i++){
		  switch(i){
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
				  case 2:{
					 if((i%4==0&&i%100!=0)||(i%100==0))
					 {	 
					     sum+=29;
					     day=29;
						 break;
					 }		  
					 else
					 {
						 sum+=28;
						 day=28;
						 break;
					 }
			default :  
					 sum+=30;
					 day=30;
					 break;
						 }
		  }
  }
		  sum-=day;
		  int week=0;
		  week=sum%7+1;
		  printf("日\t一\t二\t三\t四\t五\t六\n");
		  for(i=0;i<week;i++)
		  {	 
				  printf(" \t");
		  }
		  for(i=1;i<=day;i++)
		  {
				  printf("%d\t",i);
				  if((i+week)%7==0)
						  printf("\n");
		  }
           printf("\n");




   return 0;
}
