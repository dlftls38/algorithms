#include <stdio.h>
int main(){
	int t,result[1010],top=0,i,n;
	scanf("%d",&t);
	while(t--){
		char a[1010]={0};
		int count=0;
		scanf("%d%s",&n,a);
		for(i=0;i<n+1;i++){
			if(count>=i || a[i]==48){
				count+=a[i]-48;
			}
			else{
				result[top++]=i-count;
				break;
			}
		}
		if(i==n+1) result[top++]=i-count;
	}
	printf("%d\n",top);
	for(i=0;i<top;i++){
		printf("Case #%d: %d\n",i+1,result[i]);
	}
}
