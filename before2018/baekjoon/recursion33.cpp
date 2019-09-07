#include <stdio.h>

int d=0;

void two(int k, int kk){
	
	int i,fuck[20];
	int b=1;
	
	for(i=0;i<20;i++){
		
		fuck[i]=b;
		b*=2;
	}
	
	if(kk>-1){
		
		if (k>fuck[kk] || k==fuck[kk]){
		
			d+=1;
			printf("1");
			return two(k-fuck[kk],kk-1);
		}
	
		else {
			if (d==0){
				
				return two(k,kk-1);
			}
			else {
				
				printf("0");
				return two(k,kk-1);
			}
		}
	}
}

int main(){
	
	int n;
	
	scanf("%d",&n);
	
	two(n,19);
}
