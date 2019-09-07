#include <stdio.h>

int q(int a, int b){
	
	if(a-b<0){
		
		return b-a;
	}
	
	else{
		
		return a-b;
	}
}
int w(int a, int b, int c, int d){
	
	int i,min=100;
	int g[2]={c,d};
	for(i=0;i<2;i++){
		
		if(min>q(a,g[i])){
			
			min = q(a,g[i]);
		}
	}
	for(i=0;i<2;i++){
		
		if(min>q(b,g[i])){
			
			min = q(b,g[i]);
		}
	}
	return min;
}
int main(){
	
	int a[20][20]={0};
	int n,i,j,r=0;
	
	scanf("%d",&n);
	
	for(i=2;i<n+2;i++){
		
		for(j=2;j<n+2;j++){
			
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=2;i<n+2;i++){
		
		for(j=2;j<n+2;j++){
			
			r+=w(i,j,1,n+2)*a[i][j];
		}
	}
	
	printf("%d",r);
}
