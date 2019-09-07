#include <stdio.h>
#include <algorithm>
#include <tuple>
#include <vector>
using namespace std;
typedef tuple<int, int, int, int> tup;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		vector<tup> v;
		int score[101][101]={0};
		int n,k,t,m;
		scanf("%d%d%d%d",&n,&k,&t,&m);
		int i,j;
		int count[101]={0};
		int time[101]={0};
		for(i=0;i<m;i++){
			int q,w,e;
			scanf("%d%d%d",&q,&w,&e);
			if(score[q][w]<e){
				score[q][w]=e;
			}
			count[q]++;
			time[q]=i;
		}
		int sum[101]={0};
		for(i=1;i<n+1;i++){
			for(j=1;j<101;j++){
				sum[i]+=score[i][j];
			}
		}
		int max=0;
		for(i=1;i<n+1;i++){
			if(max<sum[i]){
				max=sum[i];
			}
		}
		for(i=1;i<n+1;i++){
			sum[i]=max-sum[i];
		}
		for(i=1;i<n+1;i++){
			v.push_back(tup(sum[i],count[i],time[i],i));
		}
		sort(v.begin(),v.end());
		int c=0;
		for(auto x : v){
			c++;
			if(get<3>(x)==t){
				printf("%d\n",c);
				break;
			}
		}
	}
}
