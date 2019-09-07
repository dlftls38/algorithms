#include <stdio.h>

int main(){
	
	int t,i,j,clo[2],cv[2],temp,af=0;
	int w,h,lo[2],a[2],b[2],vector[2];
	scanf("%d",&t);
	for(i = 0; i<t;i++){
		scanf("%d %d %d %d %d %d %d %d %d %d", &w, &h, &lo[0],&lo[1],&a[0],&a[1],&b[0],&b[1],&vector[0],&vector[1]);
		clo[0] = lo[0];
		clo[1] = lo[1];
		cv[0] = vector[0];
		cv[1] = vector[1];
		while (1==1){
			clo[0]+=cv[0];
			clo[1]+=cv[1];
			if(clo[0]>w){
				temp = clo[0] - w;
				clo[0] -= 2*temp;
				cv[0] = -cv[0];
			}
			if(clo[1]>h){
				temp = clo[1] - h;
				clo[1] -= 2*temp;
				cv[1] = -cv[1];
			}
			if(clo[0]==a[0] && clo[1] == a[1]){
				printf("A\n");
				break;
			}
			else if(clo[0]==b[0] && clo[1] == b[1]){
				printf("B\n");
				break;
			}
			af++;
			if(af>=2146000000){
				printf("O\n");
				break;
			}
				
					
		}
	}
}
