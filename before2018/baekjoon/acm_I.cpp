#include <stdio.h>
#include <algorithm>
int main(){
	int i,j,q=0,n,nonmun[10000]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&nonmun[i]);
	}
	std::sort(nonmun,nonmun+n);
//	for(int i=0;i<n;i++){
//		printf("%d",nonmun[i]);
//	}
	for (i=0;i<=n;i++){
		int flag=0,sum=0;
		for (j=n;j>n-i;j--){
			if (nonmun[j-1]<i){
				flag=1;
				break;
			}
		}
//		printf("%d ",nonmun[n-i-1]);
		if(nonmun[n-i-1]>i){
			flag=1;
		}
		if(flag!=1)
			q=i;
//		printf("%d %d %d\n",q,i,flag);
	}
	printf("%d",q);
}
