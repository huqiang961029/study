#include<stdio.h>
int main()
{
/*	int i=0;
	int arr[5]={0};
	for(i=0;i<5;i++){
			scanf("%d",&arr[i]);
			while(getchar()!='\n');
	}
			int max=arr[0];
			int min=arr[0];
			int a=0,b=0;
	for(i=0;i<5;i++){
			if(arr[i]>max){
					max=arr[i];
                    a=i;
			}
	}
	for(i=0;i<5;i++){
           	if(arr[i]<min){
    				min=arr[i];
			        b=i;
			}
	}
	  int tmp=arr[a];
	      arr[a]=arr[b];
		  arr[b]=tmp;


        for(i=0;i<5;i++){
				printf("%d",arr[i]);
		}
		*/
		int i=0,j=0;
		int a[5]={0};
		int max=a[0];
		int b=0;
		for(i=0;i<5;i++){
				scanf("%d",&a[i]);
				while(getchar()!='\n');
		}
		   for(i=0;i<5;i++)
		   {
		       max=a[i];
			   b=i;
			  for(j=i;j<5;j++){
                 if(max<a[j]){
					max=a[j];
					b=j;
				 }
			  }
		   
			  int tmp=a[b];
			      a[b]=a[i];
                  a[i]=tmp;
		   }
        for(i=0;i<5;i++){
				printf("%d\t",a[i]);
		}
	//	getchar()='\n';
				 
             
                 

		return 0;



}
