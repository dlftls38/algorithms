#include <stdio.h>
int node[10000000],child[10000000],count,jong[60];
void pre(int a){
	node[a]=0;
	child[a]=0;
	if(node[a*2+1]==1){
		
		pre(a*2+1);
	}
	if(node[a*2+2]==1){
		
		pre(a*2+2);
	}
}
void pre2(int a){
	if(node[a*2+1]==0 && node[a*2+2]==0){
		count++;
	}
	if(node[a*2+1]==1){
		
		pre2(a*2+1);
	}
	if(node[a*2+2]==1){
		
		pre2(a*2+2);
	}
}
int main(){
	
	int n,i,j,z;
	int k;
	int check[60]={0};
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		scanf("%d",&k);
		check[i]=k;
		child[k]++;
		if(k==-1){
			
			jong[i]=0;
		}
		else{
			
			if(child[k]==1){
				
				jong[i]=jong[k]*2+1;
			}
			else if (child[k]==2){
				jong[i]=jong[k]*2+2;
				child[k]=0;
			}
		}
		node[jong[i]]=1;
	}
	for(j=0;j<60;j++){
		for(i=0;i<n;i++){
			
			if(check[i]==-1){
				
				jong[i]=0;
			}
			else{
				
				if(child[check[i]]==1){
					
					jong[i]=jong[check[i]]*2+1;
				}
				else if (child[check[i]]==2){
					jong[i]=jong[check[i]]*2+2;
					child[check[i]]=0;
				}
			}
			node[jong[i]]=1;
		}
	}
	scanf("%d",&k);
	pre(jong[k]);
	pre2(0);
	if(jong[k]==0){
		
		printf("0");
	}
	else{
		
		printf("%d",count);
	}
	
}
