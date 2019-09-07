#include <stdio.h>
#include <vector>
using namespace std;
vector < vector < int > > v;
int check[100001];
int cat[100001];
int answer=0;
int m=0;
int high=0;
int visit[100001];
void recur(int position,int count){
	if(cat[position]==1) count++;
	else count=0;
	if(count>m){
		return;
	}
	int g=0;
	for(int j=0;j<v[position].size();j++){
		if(visit[v[position][j]]==0){
			visit[v[position][j]]=1;
			recur(v[position][j],count);
		}
		else{
			g++;
		}
	}
	if(g==v[position].size() && count<=m){
		//printf("! %d  %d  %d!\n",position,g,v[position].size());
		answer++;
	}
}
int main(){
	int n;
	scanf("%d%d",&n,&m);
	int i;
	for(i=1;i<n+1;i++){
		scanf("%d",&cat[i]);
		vector < int > sub;
		v.push_back(sub);
	}
	vector < int > sub;
	v.push_back(sub);
	for(i=0;i<n-1;i++){
		int q,w;
		scanf("%d%d",&q,&w);
		check[q]=1;
		check[w]=1;
		v[q].push_back(w);
		v[w].push_back(q);
	}
	visit[1]=1;
	for(i=0;i<v[1].size();i++){
		int position=v[1][i];
		int count=cat[1];
		if(count>m){
			continue;
		}
		if(visit[position]==0 && check[position]==1){
			visit[position]=1;
			recur(position,count);	
		}
		else{
			visit[position]=1;
			if(cat[position]==1) count++;
			else count=0;
			if(count>m){
				continue;
			}
			else{
				answer++;
			}
		}
	}
	printf("%d",answer);
}
