#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
#define INF 987654321
#define MAX_VALUE 1000000000
#define MOD 1000000007
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
pii dir[] = { {1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1} };
long long beauty[100001];
struct node{
	int node_number=0;
	int parent_number=0;
	vector<int>children;
}nodes[100001];
vector<int>link[100001];
vector<int>leaf;
void linking(int cur){
	int i;
	for(i=0;i<link[cur].size();i++){
		if(nodes[cur].parent_number!=link[cur][i]){
			nodes[link[cur][i]].parent_number=cur;
			nodes[cur].children.push_back(link[cur][i]);
			linking(link[cur][i]);
		}
	}
	if(nodes[cur].children.size()==0){
		leaf.push_back(cur);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++){
		scanf("%lld",&beauty[i]);
		nodes[i].node_number=i;
	}
	for(i=0;i<n-1;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		link[a].push_back(b);
		link[b].push_back(a);
	}
	linking(1);
	long long ans=0;
	for(auto it : leaf){
		int cur_pos=it;
		long long cur_gcd=beauty[cur_pos];
		while(1){
			printf("%d ",cur_pos);
			cur_gcd=__gcd(beauty[cur_pos],cur_gcd);
			ans=(ans+cur_gcd)%MOD;
			if(nodes[cur_pos].parent_number==0){
				break;
			}
			cur_pos=nodes[cur_pos].parent_number;
		}
		printf("  %lld\n",ans);
	}
	printf("%lld",ans);
}
