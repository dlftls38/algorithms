#include <stdio.h>

int stack[10100],top,max=-1,maxnode=1;
int visit[10100];

void push(int a){
	
	stack[top++]=a;
}

void pop(){
	
	stack[--top]=0;
}

struct tree{
	
	int root,left,right,cost;
} t[10100];

void dfs(int a){
	
	int i,test=0;
	
	if(t[a].left>0){
		
		push(t[a].left);
		dfs(t[a].left);
	}
	if(t[a].right>0){
		push(t[a].right);
		dfs(t[a].right);
	}
	if(t[a].left==0 && t[a].right==0){
		
		for(i=0;i<top-1;i++){
			
			if(t[stack[i]].root==stack[i+1]){
				
				test+=t[stack[i]].cost;
			}
			else{
				
				test+=t[stack[i+1]].cost;
			}
		}
		if(max<test){
			
			max = test;
			maxnode=a;
		}
	}
	pop();
	
}
void dfs2(int a){
	
	int i,test=0;
	
	if(t[a].left>0 && visit[t[a].left]==0){
		
		visit[t[a].left]=1;
		push(t[a].left);
		dfs2(t[a].left);
	}
	if(t[a].right>0 && visit[t[a].right]==0){
		
		visit[t[a].right]=1;
		push(t[a].right);
		dfs2(t[a].right);
	}
	if(t[a].left==0 && t[a].right==0){
		
		for(i=0;i<top-1;i++){
			
			if(t[stack[i]].root==stack[i+1]){
				
				test+=t[stack[i]].cost;
			}
			else{
				
				test+=t[stack[i+1]].cost;
			}
		}
		if(max<test){
			
			max = test;
		}
		pop();
	}
	if(t[a].root != 0 && visit[t[a].root]==0){
		
		visit[t[a].root]=1;
		push(t[a].root);
		dfs2(t[a].root);
	}
	if(t[a].left==0 && t[a].right==0){
	}

	else{
		pop();
	}
	
}
int main(){
	
	int n,i,j;
	int z,zz,zzz;
	
	scanf("%d",&n);
	
	for(i=1;i<n;i++){
		
		scanf("%d %d %d",&z,&zz,&zzz);
		if(t[z].left==0){
			
			t[z].left=zz;
			t[zz].root=z;
			t[zz].cost=zzz;
		}
		else{
			
			t[z].right=zz;
			t[zz].root=z;
			t[zz].cost=zzz;	
		}
	}
	push(1);
	dfs(1);
	max = 0;
	visit[maxnode]=1;
	push(maxnode);
	push(maxnode);
	dfs2(maxnode);
	printf("%d",max);
	
}
