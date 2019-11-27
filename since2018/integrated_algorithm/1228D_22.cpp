#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int n,m;
vector<int>s[100010];
int belong[100010];
inline bool cmp(const vector<int>& a,const vector<int>& b)
{
	if (a.size()!=b.size())return false;
	for (int i=0;i<a.size();i++)if (a[i]!=b[i])return false;
	return true;
}
int main()
{
	scanf("%d%d",&n,&m);
	for (int i=1;i<=m;i++)
	{
		int x,y;scanf("%d%d",&x,&y);
		s[x].pb(y);
		s[y].pb(x);
	}
	for (int i=1;i<=n;i++)sort(s[i].begin(),s[i].end());
	int pos1=1,pos2=0,pos3=0;
	belong[1]=1;
	for (int i=2;i<=n;i++)
	{
		if (cmp(s[pos1],s[i]))belong[i]=1;
		else if (!pos2)pos2=i,belong[i]=2;
		else if (cmp(s[pos2],s[i]))belong[i]=2;
		else if (!pos3)pos3=i,belong[i]=3;
		else if (cmp(s[pos3],s[i]))belong[i]=3;
		else return 0*puts("-1");
	}
	if (!pos2||!pos3)return 0*puts("-1");
	for (int i=1;i<=n;i++)printf("%d%c",belong[i],i==n?'\n':' ');
	return 0;
}

