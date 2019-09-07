#include <stdio.h>
int answer[200001]={0};
int main(){
	int i;
	int a[31]={0};
	int n,k;
	scanf("%d%d",&n,&k);
	int q=1;
	for(i=0;i<31;i++){
		a[i]=q;
		q*=2;
	}
	int count=0;
	for(i=30;i>-1;i--){
		if(n>=a[i]){
			n-=a[i];
			answer[count++]=a[i];
		}
	}
	if(count>k){
		printf("NO");
	}
	else{
		for(i=0;i<count;i++){
			if(count==k){
				break;
			}
			if(answer[i]>1){
				answer[i]/=2;
				answer[count++]=answer[i];
				i--;
			}
		}
		if(count==k){
			printf("YES\n");
			for(i=0;i<k;i++){
				printf("%d ",answer[i]);
			}
		}
		else{
			printf("NO");
		}
	}
}
