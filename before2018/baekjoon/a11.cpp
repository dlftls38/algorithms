#include <stdio.h>

int number[5003][5003];

int main(){
	
	int n,x,y,i,j,k;
	
	int s=0;
	
	scanf("%d",&n);
	
	for(k=0; k<n; k++){
		
		scanf("%d%d",&x,&y);
		x+=2;
		y+=2;
		
		for(i=0;i<5;i++){
		
			for(j=0;j<5;j++){
			
				number[x-2+j][y-2+i]=1;
			}
		}
	}
	
	for(i=2;i<5003;i++){
		
		for(j=2;j<5003;j++){
			
			if(number[i][j]==1){
				
				s+=1;
			}
		}
	}
	
	printf("%d",s);
}
