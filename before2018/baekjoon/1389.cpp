#include <stdio.h>

int relation[1100][1100];
int queue[1100];
int head,tail;
int visit[1100];
int n;
int count;
int k[1100];
int last[1100];
int soon[1100];

void push(int a){
	
	queue[tail++] = a;
}

void pop(){
	
	queue[head++] = 0;
}

void bfs(int a){
	
	int i;
	
	for(i=0;i<n;i++){
		
		if(a != soon[i] && visit[soon[i]]==0 && relation[a][soon[i]]==1){
			
			push(soon[i]);
			visit[soon[i]]=1;
			k[soon[i]]+=1+k[a];
			count+=k[soon[i]];
		}
	}
	pop();
	if(tail==head){
	}
	else{
		
		bfs(queue[head]);
	}
}
int main(){
	
	int m;
	int i,j;
	int z,zz;
	int min=10000;
	int min2=10000;
	int cc=0;
	int test=0;
	
	scanf("%d%d",&n,&m);
	
	for(i=0;i<m;i++){
		
		scanf("%d%d",&z,&zz);
		relation[z][zz]=1;
		relation[zz][z]=1;
		for(j=0;j<cc;j++){
			
			if(soon[j]==z){
				
				test++;
			}
		}
		if(test==0){
			
			soon[cc++] = z;
		}
		test=0;
		for(j=0;j<cc;j++){
			
			if(soon[j]==zz){
				
				test++;
			}
		}
		if(test==0){
			
			soon[cc++] = zz;
		}
		test=0;
		
	}
	for(i=0;i<n;i++){
		visit[soon[i]]=1;
		push(soon[i]);
		bfs(soon[i]);
		last[soon[i]]=count;
		count=0;
		for(j=0;j<n;j++){
			
			visit[soon[j]]=0;
			k[soon[j]]=0;
		}
	}
	for(i=0;i<n;i++){
		
		if(min>last[soon[i]]){
			min = last[soon[i]];
			min2 = soon[i];
		}
		else if(min==last[soon[i]]){
			
			if(min2>soon[i]){
				
				min = last[soon[i]];
				min2 = soon[i];
			}
		}
	}
	printf("%d",min2);
	
}
