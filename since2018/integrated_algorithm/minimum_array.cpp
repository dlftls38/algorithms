#include <stdio.h>
#include <string.h>
int a[200001]={0};
int b[200001]={0};
int c[200001]={0};
int count[200001]={0};
int position[200001]={0};
int main(){
	int n;
	scanf("%d",&n);
	memset(position,-1,n);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
		count[b[i]]++;
	}
	for(i=0;i<n;i++){
		if(count[i]>0){
			position[i]=i;
			for(j=i-1;j>-1;j--){
				if(count[j]==0){
					position[j]=i;
				}				
				else{
					break;
				}	
			}
		}
	}
	for(i=0;i<n;i++){
		if(position[i]==-1){
			position[i]=position[0];
		}
	}
	for(i=0;i<n;i++){
		int k = n-a[i];
		if(k==n){
			k=0;
		}
		int current=position[k];
		int next;
		if(current+1==n)
			next=position[0];
		else
			next=position[current+1];
		c[i]=(current+a[i])%n;
		count[current]--;
		if(count[current]==0){
			for(j=k;j>-1;j--){
				if(position[j]==current)
					position[j]=next;
				else{
					break;
				}
			}
			for(j=k+1;j<n;j++){
				if(position[j]==current)
					position[j]=next;
				else{
					break;
				}
			}
			for(j=n-1;j>-1;j--){
				if(position[j]==current)
					position[j]=next;
				else{
					break;
				}
			}
			for(j=0;j<n;j++){
				if(position[j]==current)
					position[j]=next;
				else{
					break;
				}
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",c[i]);
	}
}