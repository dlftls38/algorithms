#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int dir=-1,i,x=0,y=0,gold=1,k,m;
		scanf("%d%d",&k,&m);
		for(i=0;i<k;i++){
			dir++;
			if(dir==0){
				y+=gold;
			}
			else if(dir==1){
				x+=gold;
			}
			else if(dir==2){
				y-=gold;
			}
			else{
				x-=gold;
				dir=-1;
			}
			gold*=m;
			int next=0;
			while(1){
				next+=gold%10;
				gold/=10;
				if(gold==0){
					gold=next;
					break;
				}
			}
		}
		printf("%d %d\n",x,y);
	}
}
