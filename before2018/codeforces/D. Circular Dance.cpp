#include <stdio.h>
#include <vector>
using namespace std;
vector < vector < int > > v;
int check[200001];
int answer[200001];
int tail;
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n+1;i++){
		vector < int > p;
		v.push_back(p);
	}
	int yeah1;
	int yeah2;
	for(i=0;i<n;i++){
		int q,w;
		scanf("%d%d",&q,&w);
		v[q].push_back(w);
		v[w].push_back(q);
		if(i==0){
			yeah1=q;
			yeah2=w;
		}
	}
	answer[tail++]=1;
	//printf("1 ");
	check[1]=1;
	int now=1;
	for(i=1;i<n+1;i++){
		for(j=0;j<2;j++){
			if(check[v[now][j]]==0){
				//printf("%d ",v[now][j]);
				answer[tail++]=v[now][j];
				check[v[now][j]]=1;
				now=v[now][j];
				break;
			}
		}
	}
	int p=0;
	for(i=0;i<tail;i++){
		if(answer[i]==1){
			if(i+1<n){
				if(answer[i+1]==yeah1 || answer[i+1]==yeah2){
					p=0;
				}
				else{
					p=1;
				}
			}
			else{
				if(answer[0]==yeah1 || answer[0]==yeah2){
					p=0;
				}
				else{
					p=1;
				}
			}
		}
	}
	if(p==0){
		for(i=0;i<tail;i++){
			printf("%d ",answer[i]);
		}
	}
	else{
		for(i=tail-1;i>-1;i--){
			printf("%d ",answer[i]);
		}
	}
}
