#include <stdio.h>

int d=0;

void two(int k, int kk){
	
	int fuck[10] = {1,2,4,8,16,32,64,128,256,512};
	
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
	
	int n,i;
	
	scanf("%d",&n);
	
	two(n,9);
}
