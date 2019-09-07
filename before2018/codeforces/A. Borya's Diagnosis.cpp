#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int s[1001]={0};
	int d[1001]={0};
	for(int i=0;i<n;i++){
		scanf("%d%d",&s[i],&d[i]);
	}
	int last=s[0];
	for(int i=1;i<n;i++){
		int k=s[i];
		while(1){
			if(k<=last){
				k+=d[i];
			}
			else{
				break;
			}
		}
		last=k;
	}
	printf("%d",last);
}
