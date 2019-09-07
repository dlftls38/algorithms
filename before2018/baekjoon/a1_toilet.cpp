#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int k;
	if(n%2==0){
		if(n==2){
			k=1;
		}
		else if(n==4){
			k=2;
		}
		else if(n==6){
			k=2;
		}
		else if(n==8){
			k=3;
		}
		else if(n==10){
			k=3;
		}
		else if(n==12){
			k=4;
		}
		else if(n==14){
			k=5;
		}
		else if(n==16){
			k=5;
		}
		else{
			int count=0;
			k=6;
			for(int i=9;i<n/2;i++){
				if(count==0){
					k++;
					count++;
				}
				else if(count==1){
					count++;
				}
				else{
					count=0;
					k++;
				}
			}	
		}
		printf("%d %d",n/2,k);
	}
	else{
		if(n==1){
			k=1;
		}
		else if(n==3){
			k=1;
		}
		else if(n==5){
			k=2;
		}
		else if(n==7){
			k=2;
		}
		else if(n==9){
			k=3;
		}
		else if(n==11){
			k=4;
		}
		else if(n==13){
			k=4;
		}
		else if(n==15){
			k=5;
		}
		else{
			int count=0;
			k=6;
			for(int i=9;i<n/2+1;i++){
				if(count==0){
					count++;
				}
				else if(count==1){
					count++;
					k++;
				}
				else{
					count=0;
					k++;
				}
			}	
		}
		printf("%d %d",n/2+1,k);
	}
}
