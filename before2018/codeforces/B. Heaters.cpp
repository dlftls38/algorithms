#include <stdio.h>
int main(){
	int n,r;
	scanf("%d%d",&n,&r);
	int a[3000]={0};
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int answer=0;
	int check[3000]={0};
	int i,j,k;
	for(i=0;i<n;i++){
		if(check[i]==0){
			int p=0;
			for(j=r-1;j>-1;j--){
				if(a[i+j]==1){
					for(k=0;k<r;k++){
						check[i+j+k]=1;
						if(i+j-k>-1) check[i+j-k]=1;
					}
					answer++;
					p=1;
					break;
				}
			}
			if(p==0){
				for(j=0;j<r;j++){
					if(i-j>-1 && a[i-j]==1){
						for(k=0;k<r;k++){
							check[i-j+k]=1;
							if(i-j-k>-1) check[i-j-k]=1;
						}
						answer++;
						break;
					}
				}
			}
		}
	}
	for(i=0;i<n;i++){
		if(check[i]==0){
			printf("-1");
			return 0;
		}
	}
	printf("%d",answer);
}
