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
	sort(a,a+2*n);
	sort(v.begin(),v.end());
	for(i=0;i<m;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		v.push_back(make_pair(a,b));
	}
	int t;
	scanf("%d",&t);
	int last=-1;
	if(t==1){
		for(j=0;j<n;j++){
			int p=0;
			for(i=m-1;i>-1;i--){
				if(v[i].first==last || v[i].second==last){
					for(k=0;k<2*n;k++){
						if((a[k]==v[i].second || a[k]==v[i].first)&& check[k]==0){
							check[k]=1;
							last=a[k];
							p=1;
							printf("%d\n",a[k]);
							fflush(stdout);
							break;
						}
					}
				}
				if(p==1){
					break;
				}
			}
			if(p==0){
				for(i=2*n-1;i>-1;i--){
					if(check[i]==0){
						check[i]=1;
						last=a[i];
						printf("%d\n",a[i]);
						fflush(stdout);
						break;
					}
				}	
			}
			p=0;
			for(i=m-1;i>-1;i--){
				if(v[i].first==last || v[i].second==last){
					for(k=0;k<2*n;k++){
						if((a[k]==v[i].second || a[k]==v[i].first)&& check[k]==0){
							check[k]=1;
							last=a[k];
							p=1;
							int x;
							scanf("%d",&x);
							break;
						}
					}
				}
				if(p==1){
					break;
				}
			}
			if(p==0){
				int x;
				scanf("%d",&x);
				for(i=0;i<2*n;i++){
					if(x==a[i]){
						check[i]=1;
						last=x;
						break;
					}
				}
			}
		}
	}
	else{
		for(j=0;j<n;j++){
			int p=0;
			for(i=m-1;i>-1;i--){
				if(v[i].first==last || v[i].second==last){
					for(k=0;k<2*n;k++){
						if((a[k]==v[i].second || a[k]==v[i].first)&& check[k]==0){
							check[k]=1;
							last=a[k];
							p=1;
							int x;
							scanf("%d",&x);
							break;
						}
					}
				}
				if(p==1){
					break;
				}
			}
			if(p==0){
				int x;
				scanf("%d",&x);
				for(i=0;i<2*n;i++){
					if(x==a[i]){
						check[i]=1;
						last=x;
						break;
					}
				}
			}
			p=0;
			for(i=m-1;i>-1;i--){
				if(v[i].first==last || v[i].second==last){
					for(k=0;k<2*n;k++){
						if((a[k]==v[i].second || a[k]==v[i].first)&& check[k]==0){
							check[k]=1;
							last=a[k];
							p=1;
							printf("%d\n",a[k]);
							fflush(stdout);
							break;
						}
					}
				}
				if(p==1){
					break;
				}
			}
			if(p==0){
				for(i=2*n-1;i>-1;i--){
					if(check[i]==0){
						check[i]=1;
						last=a[i];
						printf("%d\n",a[i]);
						fflush(stdout);
						break;
					}
				}	
			}
		}
	}
}
