#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		char a[110000]={0};
		scanf("%d",&n);
		scanf("%s",a);
		int i;
		int count[200]={0};
		for(i=0;i<n;i++){
			count[a[i]]++;
		}
		for(i=0;i<200;i++){
			if(count[i]>0){
				printf("%c %d\n",i,count[i]);
			}
		}
	}
}
