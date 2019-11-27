#include<bits/stdc++.h>
#define ll long long
#define uint unsigned
#define ull unsigned ll
#define pii pair<int,int>
#define pll pair<ll,ll>
#define PB push_back
#define fi first
#define se second
#define For(i,j,k) for (int i=(int)(j);i<=(int)(k);i++)
#define Rep(i,j,k) for (int i=(int)(j);i>=(int)(k);i--)
#define CLR(a,v) memset(a,v,sizeof(a))
#define CPY(a,b) memcpy(a,b,sizeof(a))
using namespace std;
int n,x,S[25];
long long pr[25][25],f[(1<<20)];
int main(){
	scanf("%d",&n);
	int i,j,k;
	for(i=1;i<=n;i++){
		scanf("%d",&x); 
		--x;
		for(j=0;j<20;j++){
			if (x!=j){
				pr[j][x]+=S[j];	
			}
		}
		++S[x];
	}
	memset(f,60,sizeof(f));
	f[0]=0;
	for(i=0;i<(1<<20);i++){
		for(j=0;j<20;j++){
			if(!(i&(1<<j))){
				long long s=f[i];
				for(k=0;k<20;k++){
					if(i&(1<<k)){
						s+=pr[j][k];
					}
				}
				f[i|(1<<j)]=min(f[i|(1<<j)],s);	
			}
		}
	}
	printf("%lld",f[(1<<20)-1]);
}
