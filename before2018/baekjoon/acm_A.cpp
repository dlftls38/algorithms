#include <stdio.h>
int tree[2500000];
int last[2000000];
long long sum;
void search(int start,int end){
	int i;
	int mid=(start+end)/2;
	int min=100000000;
	for(i=start;i<mid;i++){
		if(last[i]<min){
			min=last[i];
		}
	}
	sum+=min;
	for(i=start;i<mid;i++){
		last[i]-=min;
	}
	if(start+1!=mid) search(start,mid);
	min=100000000;
	for(i=mid;i<end;i++){
		if(last[i]<min){
			min=last[i];
		}
	}
	sum+=min;
	for(i=mid;i<end;i++){
		last[i]-=min;
	}
	if(mid+1!=end) search(mid,end);
}
int main(){
	int n;
	scanf("%d",&n);
	int i;
	int p=1<<n+1;
	for(i=2;i<p;i++){
		scanf("%d",&tree[i]);
		sum+=tree[i];
		tree[i]+=tree[i/2];
	}
	int max=0;
	for(i=p/2;i<p;i++){
		if(max<tree[i]){
			max=tree[i];
		}
	}
	int top=0;
	for(i=p/2;i<p;i++){
		last[top++]=max-tree[i];
	}
	search(0,top);
	printf("%lld",sum);
}
