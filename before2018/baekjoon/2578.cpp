#include <stdio.h>
int main(){
	int a[5][5];
	int b[25];
	int i,j,k;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<25;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<25;i++){
		int count=0;
		int flag=0;
		for(j=0;j<5;j++){
			for(k=0;k<5;k++){
				if(a[j][k]==b[i]){
					a[j][k]=0;
					flag=1;
					break;
				}
			}
			if(flag==1){
				break;
			}
		}
		for(j=0;j<5;j++){
			int sum=0;
			for(k=0;k<5;k++){
				sum+=a[j][k];
			}
			if(sum==0){
				count++;
			}
		}
		for(j=0;j<5;j++){
			int sum=0;
			for(k=0;k<5;k++){
				sum+=a[k][j];
			}
			if(sum==0){
				count++;
			}
		}
		int sum=0;
		for(j=0;j<5;j++){
			sum+=a[j][j];
		}
		if(sum==0){
			count++;
		}
		sum=0;
		for(j=0;j<5;j++){
			sum+=a[j][4-j];
		}
		if(sum==0){
			count++;
		}
		if(count>=3){
			break;
		}
	}
	printf("%d",i+1);
}
