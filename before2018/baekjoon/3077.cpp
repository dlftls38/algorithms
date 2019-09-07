#include <stdio.h>
#include <string.h>
int main(){
	int n,i,j,k,count=0,a,b;
	char dap[2501][16]={0};
	char hak[2501][16]={0};
	int check[2501]={0};
	int soon[2501]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",dap[i]);
	}
	for(i=0;i<n;i++){
		scanf("%s",hak[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(check[j]==0 && strcmp(hak[i],dap[j])==0){
				check[j]=1;
				soon[i]=j;
			}
		}
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(soon[i]<soon[j]){
				count++;
			}
			else{
			}
		}
	}
	printf("%d/%d",count,n*(n-1)/2);
}
