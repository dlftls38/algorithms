#include <stdio.h>
int main(){
	int n;
	int i,j;
	int a[1001]={0};
	scanf("%d",&n);
	for(i=1;i<n+1;i++){
		int x;
		scanf("%d",&x);
		a[i]=x;
	}
	for(i=1;i<n+1;i++){
		int count[1001]={0};
		int position=i;
		count[position]=1;
		while(count[position]!=2){
			position=a[position];
			count[position]++;
		}
		printf("%d ",position);
	}
}
