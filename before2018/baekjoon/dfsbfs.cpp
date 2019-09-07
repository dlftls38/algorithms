#include <stdio.h>

int pa[1001][1001];
int check[1001];
int check2[1001];
int check3[1001];
int dfs[1001];
int bfs[1001];

int main(){
	
	int n,m,v,a,b,i,j,k;
	int p=1;
	
	scanf("%d%d%d",&n,&m,&v);
	
	for(i=0; i<m; i++){
		
		scanf("%d%d",&a,&b);
		pa[a][b] = 1;
		pa[b][a] = 1;
	}
	k = v;
	check[v] = 1;
	check2[v] = 1;
	check3[v] = 1;
	dfs[p] = v;
	bfs[p] = v;
	
	p = 2;
	for(i=1; i<n+1; i++){
		
		for(j=1; j<n+1; j++){
			
			if(pa[v][j]==1 && check[j] != 1){
			
				check[j] = 1;
				v = j;
				dfs[p++] = v;
			}
		}
	}
	
	v = k;
	p = 2;
	for(i=1; i<n+1; i++){
		
		for(j=1; j<n+1; j++){
			
			if(pa[v][j]==1 && check2[j] != 1){
			
				check2[j] = 1;
				bfs[p++] = j;
				
			}
		}
		for(j=1; j<n+1; j++){
			
			if(pa[v][j]==1 && check3[j] != 1){
				
				v = j;
			}
		}
	}
	
	for(i=1; i<n+1; i++){
		
		if(dfs[i]>0){
			
			printf("%d ",dfs[i]);
		}
	}
	
	printf("\n");
	
	for(i=1; i<n+1; i++){
		
		if(bfs[i]>0){
			
			printf("%d ",bfs[i]);
		}
	}		
}
