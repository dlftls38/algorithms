#include <stdio.h>
#include <math.h>
int main(){
	int x,check,number,a[1000],top=0;
	long long lo,hi,now,count,i;
	while(1){
		scanf("%lld%lld%d",&lo,&hi,&x);
		if(lo==0 && hi==0 && x==0) break;
		check=0;
		for(i=lo;i<=hi;i++){
			now = i;
			number=0;
			count=0;
			while(1){
				if(now==1){
					number=0;
					break;	
				}
				if(now%2==1) count++;
				now/=2;
				if(now==1){
					count++;
					now=count;
					number++;
					if(count==1){
						break;
					}
					count=0;
				}
			}
			if(number==top) printf("%d %d\n",top++,i);
			//a[top++]=number;
			//if(number==x) check++;
		}
		//printf("%d\n",check);
	}
	//for(i=0;i<1000;i++) printf("%d\n",a[i]);
} 

