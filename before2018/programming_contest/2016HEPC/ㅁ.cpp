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
		
	}
	else{
		count++;
		go(first,hp-1,count);
		go(first,hp*2-first,count);
		go(first,hp-,count);
	}
}
int main(){
	int t;
	scanf("%d",&t);
	for(i=1;i<13;i++){
		go(i,i,0);
	}
	for(i=1;i<13;i++){
		printf("%d\n",rep[i])l
	}
	//while(t--){
		//int n;
		//scanf("%d",&n);
		
	//}
}
