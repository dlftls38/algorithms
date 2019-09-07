#include <stdio.h>
#define swap(a,b) {a=a^b;b=a^b;a=a^b;}
int main(){
	int n,i,j,k,l,count,max=0;
	char a[51][51]={0},check;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(j+1<n && a[i][j]!=a[i][j+1]){
				swap(a[i][j],a[i][j+1]);
				for(k=0;k<n;k++){
					check='A';
					count=0;
					for(l=0;l<n;l++){
						if(a[k][l]!=check){
							if(max<count) max=count;
							check=a[k][l];
							count=1;
						}
						else{
							count++;
						}
					}
					if(max<count) max=count;
				}
				for(k=0;k<n;k++){
					check='A';
					count=0;
					for(l=0;l<n;l++){
						if(a[l][k]!=check){
							if(max<count) max=count;
							check=a[l][k];
							count=1;
						}
						else{
							count++;
						}
					}
					if(max<count) max=count;
				}
				swap(a[i][j],a[i][j+1]);
			}
			if(i+1<n && a[i][j]!=a[i+1][j]){
				swap(a[i][j],a[i+1][j]);
				for(k=0;k<n;k++){
					check='A';
					count=0;
					for(l=0;l<n;l++){
						if(a[k][l]!=check){
							if(max<count) max=count;
							check=a[k][l];
							count=1;
						}
						else{
							count++;
						}
					}
					if(max<count) max=count;
				}
				for(k=0;k<n;k++){
					check='A';
					count=0;
					for(l=0;l<n;l++){
						if(a[l][k]!=check){
							if(max<count) max=count;
							check=a[l][k];
							count=1;
						}
						else{
							count++;
						}
					}
					if(max<count) max=count;
				}
				swap(a[i][j],a[i+1][j]);
			}
		}
	}
	printf("%d",max);
}
