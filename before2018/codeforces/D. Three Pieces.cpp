#include <stdio.h>
int abs(int a,int b){
	if(a-b>=0){
		return a-b;
	}
	else{
		return b-a;
	}
}
int main(){
	int n;
	int a[3][3]={0};
	scanf("%d",&n);
	int q,w;
	int state;
	int e[10],r[10];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&a[i][j]);
			if(a[i][j]==1){
				q=i;
				w=j;
			}
			if(a[i][j]==2){
				if(i==q || j==w){
					state=3;
				}
				else if(abs(i,q)==abs(j,w)){
					state=2;
				}
				else{
					state=1;
				}
			}
		}
	}
	int move=0;
	int change=0;
	while(1){
		
		if(i==q || j==w){
			if(state==3){
				q=i
			}
		}
		else if(abs(i,q)==abs(j,w)){
			state=2;
		}
		else{
			state=1;
		}
	}
}
