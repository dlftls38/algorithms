#include <stdio.h>

int main(){
	
	long long i,t,x,y;
	long long q=1,w=1,ww=0,e=1,r;
	
	scanf("%lld",&t);
	for(i=0;i<t;i++){
		
		scanf("%lld%lld",&x,&y);
		r=y-x;
		while(1){
			
			if(e<=r && r<e+w){
				
				printf("%lld\n",q);
				break;
			}
			else{
				q++;
				e+=w;
				ww++;
				if(ww==2){
					
					ww=0;
					w++;
				}
			}
		}
		q=1;
		w=1;
		e=1;
		ww=0;
	}
}
