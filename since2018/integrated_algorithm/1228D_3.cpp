#include <bits/stdc++.h>
#define ll long long int
#define sz 300005
using namespace std;
ll pw[sz];
 
ll ha[sz];
ll check[sz];
int main()
{
    cin.tie(NULL);
    ll n,m;
    cin >> n >> m;
    pw[0] = 1;
    for(ll i=1;i<=n;i++){
    	pw[i] = 29*pw[i-1];
	}
 	ll cnt=0;
    for(ll i=1;i<=m;i++)
    {
      ll u,v;
      cin >> u >> v;
      ha[u]+=pw[v];
      ha[v]+=pw[u];
      if(check[u]==0){
      	check[u]=1;
      	cnt++;
	  }
	  if(check[v]==0){
      	check[v]=1;
      	cnt++;
	  }
    }
    if(cnt<n){
    	cout<<-1<<endl;
    	return 0;
	}
    map <ll,ll> ma;
    ll idx = 1;
    for(ll i=1;i<=n;i++)
    {
      if(ma[ha[i]] == 0)
      ma[ha[i]] = idx++;
    }
    ll xx = ma.size();
    if(xx == 3)
    {
      for(ll i=1;i<=n;i++)
      cout<<ma[ha[i]]<<" ";
    }
    else
    cout<<-1<<endl;
 
 
 
 
return 0;
}
