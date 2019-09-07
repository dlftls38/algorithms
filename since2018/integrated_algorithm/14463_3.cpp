#include <bits/stdc++.h>
using namespace std;
using us=unsigned short;

void update(vector<int>& tree, int idx, int diff){
	while(idx<=tree.size()){
		tree[idx]+=diff;
		idx+=(idx&-idx);
	}
}
int sum(vector<int>& tree, int idx){
	int ret=0;
	while(idx>0){
		ret+=tree[idx];
		idx-=(idx&-idx);
	}
	return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	int n, a;
    cin>>n;
    vector<us>Is(n+1, 0);
    vector<int>tree(n+1, 0);
	int ans=0, cursor=1;
    for(int i=1; i<=2*n; ++i){
		cin>>a;
        if(Is[a]==0){
            Is[a]=cursor;
            cursor++;
			update(tree, Is[a], 1);
        }else{
			update(tree, Is[a], -1);
			ans+=sum(tree, cursor)-sum(tree, Is[a]-1);
        }
    }
    cout<<ans;
}

