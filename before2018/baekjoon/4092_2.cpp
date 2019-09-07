#include <stdio.h>
#include <math.h>
int main(){
	int x,check;
	long long lo,hi,now,count,i,c,q=0,w=0,e=0,r=0,t=0;
	while(1){
		scanf("%lld%lld%d",&lo,&hi,&x);
		if(lo==0 && hi==0 && x==0) break;
		check=0;
		for(i=lo;i<=hi;i++){
			q=0,w=0,e=0,r=0,t=0;
			now = i;
			count=0;
			while(1){
				for (c = 0; now; ++c) now &= now - 1;
				count++;
				if(i==1) count--;
				if(c!=1) now=c;
				else break;
			}
			if(count==0) q++;
			if(count==1) w++;
			if(count==2) e++;
			if(count==3) r++;
			if(count==4) t++;
			if(count==x) check++;
		}
		printf("%d %d %d %d %d\n",q,w,e,r,t);
		//printf("%d\n",check);
	}
} 

