#include <stdio.h>
#include <string.h>
int main(){
	int n,m,q,i,j,k,l,check[1001]={0};
	char s[1001],t[1001];
	scanf("%d%d%d%s%s",&n,&m,&q,s,t);
	for(i=0;i<q;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		int count=0;
		for(j=x-1;j<y-m+1;j++){
			if(s[j]==t[0]){
				if(check[j]==1){
					count++;
				}
				else if(check[j]==-1){
				}
				else{
					int q=0;
					for(k=0;k<m;k++){
						if(s[j+k]==t[k]) q++, check[j]=-1;
						else break;
					}
					if(q==m) count++, check[j]=1;
				}
			}
		}
		printf("%d\n",count);
	}
}
