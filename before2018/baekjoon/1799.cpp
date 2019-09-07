#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[10][10]={0};
	int i,j,k,l;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i][j]>0){
				a[i][j]++;
				for(k=1;i+k<n && j+k<n;k++){
					if(a[i+k][j+k]>0){
						a[i][j]++;
					}
				}	
				for(k=1;i-k>=0 && j+k<n;k++){
					if(a[i-k][j+k]>0){
						a[i][j]++;
					}
				}
				for(k=1;i+k<n && j-k>=0;k++){
					if(a[i+k][j-k]>0){
						a[i][j]++;
					}
				}
				for(k=1;i-k>=0 && j-k>=0;k++){
					if(a[i-k][j-k]>0){
						a[i][j]++;
					}
				}
			}
		}
	}
	int count=0;
	while(1){
		int max=1000;
		int x=100,y=100;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(max>a[i][j] && a[i][j]!=0){
					max=a[i][j];
					x=j;
					y=i;
				}
			}
		}
		if(x==100 && y==100){
			break;
		}
		else{
			count++;
		}
		a[y][x]=0;
		for(k=1;y+k<n && x+k<n;k++){
			if(a[y+k][x+k]>0){
				a[y+k][x+k]=0;
			}
		}	
		for(k=1;y-k>=0 && x+k<n;k++){
			if(a[y-k][x+k]>0){
				a[y-k][x+k]=0;
			}
		}
		for(k=1;y+k<n && x-k>=0;k++){
			if(a[y+k][x-k]>0){
				a[y+k][x-k]=0;
			}
		}
		for(k=1;y-k>=0 && x-k>=0;k++){
			if(a[y-k][x-k]>0){
				a[y-k][x-k]=0;
			}
		}
	}
	printf("%d",count);
}
