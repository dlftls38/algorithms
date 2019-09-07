#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <set>
#include <numeric>
#include <cmath>
#include <map>
#include <vector>
#include <queue>
#include <stack>
#include <cstring>
#include <queue>
#include <numeric>
#include <iomanip>
#define ll long long
using namespace std;
const int MAXN=200005;
int sz[MAXN],kill[MAXN],ans,n,k;
vector<vector<pair<int,int> > >adj;
map<int,int> mp;
int getSz(int here,int dad){
    sz[here]=1;
    for(int i=0;i<adj[here].size();i++){
        int there=adj[here][i].first;
        if(dad==there || kill[there])continue;
        sz[here]+=getSz(there,here);
    }
    return sz[here];
}
int find_Center(int here,int dad,int cap){
    for(int i=0;i<adj[here].size();i++){
        int there=adj[here][i].first;
        if(kill[there] || there==dad)continue;
        if(sz[there]>cap)return find_Center(there,here,cap);
    }
    return here;
}
void compute(int here,int dad,int dist,int depth){
    if(dist>k)return;
    auto it=mp.find(k-dist);
    if(it!=mp.end()){
        ans=min(ans,it->second+depth);
    }
    for(int i=0;i<adj[here].size();i++){
        int there=adj[here][i].first;
        int w=adj[here][i].second;
        if(kill[there] || dad==there)continue;
        if(!kill[there] && there!=dad)compute(there,here,dist+w,depth+1);
    }
}
void add(int here,int dad,int dist,int depth){
    if(dist>k)return;
    auto it=mp.find(dist);
    if(it!=mp.end())
        it->second=min(it->second,depth);
    else{
        mp[dist]=depth;
    }
    for(int i=0;i<adj[here].size();i++){
        int there=adj[here][i].first;
        int w=adj[here][i].second;
        if(kill[there] || there==dad)continue;
        add(there,here,dist+w,depth+1);
    }
}
void go(int here){
    int cap=getSz(here,-1)/2;
    int cen=find_Center(here,-1,cap);
    kill[cen]=1;
    mp.clear(); mp[0]=0;
    for(int i=0;i<adj[cen].size();i++){
        int there=adj[cen][i].first; int w=adj[cen][i].second;
        if(!kill[there]){
            compute(there,cen,w,1);
            add(there,cen,w,1);
        }
    }
    for(int i=0;i<adj[cen].size();i++){
        int there=adj[cen][i].first;
        if(!kill[there])go(there);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>k;
    ans=1e9;
    adj.resize(n+1);
    for(int i=0;i<n-1;i++){
        int u,v,w; cin>>u>>v>>w;
        u++,v++;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    go(1);
    if(ans>=1e9){
        cout<<-1;
    }
    else cout<<ans;
    return 0;
}
