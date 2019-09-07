#include <stdio.h>
int main(){
	int i,n,m,k,j;
	int front=1,rear,count=0,p=0;
	int left=0,right=0;
	int a[2555]={0};
	scanf("%d%d",&n,&m);
	rear=n;
	for(i=1;i<n+1;i++){
		a[i]=i;
	}
	for(i=1;i<m+1;i++){
		scanf("%d",&k);
		if(a[front]==k){
		}
		else{
			for(j=front+1;j<rear+1;j++){
				left++;
				if(a[j]==k){
					break;
				}
			}
			if(j==rear+1){
				p++;
			}
			for(j=rear;j>front;j--){
				right++;
				if(a[j]==k){
					break;
				}
			}
			if(j==front){
				p++;
			}
			if(p==2){
				continue;
				p=0;
			}
			if(left>right){
				count+=right;
			}
			else{
				count+=left;
			}
			left=0;
			right=0;
			for(j=front;j<front+n;j++){
				if(a[j]==k){
					break;
				}
				a[rear+1]=a[front];
				rear++;
				front++;
			}
		}
		front++;
	}
	printf("%d",count);
}
