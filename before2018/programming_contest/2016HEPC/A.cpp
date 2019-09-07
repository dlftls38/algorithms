#include <stdio.h>
int rep[11000];
void go(int first,int hp,int count){
	if(hp==0){
		if(rep[first]==0){
			rep[first]=count;
		}
		else{
			if(rep[first]>count){
				rep[first]=count;
			}
		}
	}
	else if(hp<0){
		return;
	}
	else{
		count++;
		go(first,hp-1,count);
		if(first>hp){
			go(first,hp*2-first,count);
		}
		go(first,hp-3,count);
	}
}
int main(){
	int t,i;
	scanf("%d",&t);
	for(i=1;i<10001;i++){
		go(i,i,0);
	}
	while(t--){
		int n,max=0,index;
		scanf("%d",&n);
		for(i=1;i<n;i++){
			if(max<rep[i]){
				max=rep[i];
				index=i;
			}
		}
		printf("%d %d\n",max,index);
	}
}
