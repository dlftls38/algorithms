#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	char a[100][4]={0};
	int b[100]={0};
	int c[100]={0};
	int i,j,k,l;
	for(i=0;i<n;i++){
		scanf("%s%d%d",a[i],&b[i],&c[i]);
	}
	int result=0;
	for(i=1;i<10;i++){
		for(j=1;j<10;j++){
			for(k=1;k<10;k++){
				if(i==j || i==k || j==k){
					continue;
				}
				int count=0;
				for(l=0;l<n;l++){
					int s=0,ba=0;
					if(i==a[l][0]-48){
						s++;
					}
					if(j==a[l][1]-48){
						s++;
					}
					if(k==a[l][2]-48){
						s++;
					}
					if(i==a[l][1]-48){
						ba++;
					}
					if(i==a[l][2]-48){
						ba++;
					}
					if(j==a[l][0]-48){
						ba++;
					}
					if(j==a[l][2]-48){
						ba++;
					}
					if(k==a[l][0]-48){
						ba++;
					}
					if(k==a[l][1]-48){
						ba++;
					}
					if(s==b[l] && ba==c[l]){
						count++;
					}
				}
				if(count==n){
					result++;
				}
			}
		}
	}
	printf("%d",result);
}
