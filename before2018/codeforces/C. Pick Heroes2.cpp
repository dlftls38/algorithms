#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
vector < pair < int , int > > v;
int a[2001];
int check[2001];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j,k;
	for(i=0;i<n*2;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++){
		int o,u;
		scanf("%d%d",&o,&u);
		v.push_back(make_pair(o-1,u-1));
		v.push_back(make_pair(u-1,o-1));
	}
	int t;
	scanf("%d",&t);
	int last=-1;
	if(t==1){
		for(j=0;j<n;j++){
			int p=0;
			int max=0;
			int position=0;
			for(i=0;i<m*2;i++){
				if(a[v[i].first]==last && check[v[i].second]==0){
					p=1;
					check[v[i].second]=1;
					last=a[v[i].second];
					printf("%d\n",v[i].second+1);
					fflush(stdout);
					break;
				}
			}
			if(p==0){
				for(i=0;i<2*n;i++){
					if(check[i]==0 && max<a[i]){
						max=a[i];
						position=i;
					}
				}
				check[position]=1;
				last=max;
				printf("%d\n",position+1);
				fflush(stdout);
			}
			p=0;
			max=0;
			position=0;
			for(i=0;i<m*2;i++){
				if(a[v[i].first]==last && check[v[i].second]==0){
					p=1;
					check[v[i].second]=1;
					last=a[v[i].second];
					int x;
					scanf("%d",&x);
					break;
				}
			}
			if(p==0){
				int x;
				scanf("%d",&x);
				check[x-1]=1;
				last=a[x-1];
			}
		}
	}
	else{
		for(j=0;j<n;j++){
			int p=0;
			int max=0;
			int position=0;
			for(i=0;i<m*2;i++){
				if(a[v[i].first]==last && check[v[i].second]==0){
					p=1;
					check[v[i].second]=1;
					last=a[v[i].second];
					int x;
					scanf("%d",&x);
					break;
				}
			}
			if(p==0){
				int x;
				scanf("%d",&x);
				check[x-1]=1;
				last=a[x-1];
			}
			p=0;
			max=0;
			position=0;
			for(i=0;i<m*2;i++){
				if(a[v[i].first]==last && check[v[i].second]==0){
					p=1;
					check[v[i].second]=1;
					last=a[v[i].second];
					printf("%d\n",v[i].second+1);
					fflush(stdout);
					break;
				}
			}
			if(p==0){
				for(i=0;i<2*n;i++){
					if(check[i]==0 && max<a[i]){
						max=a[i];
						position=i;
					}
				}
				check[position]=1;
				last=max;
				printf("%d\n",position+1);
				fflush(stdout);
			}
		}
	}
}
