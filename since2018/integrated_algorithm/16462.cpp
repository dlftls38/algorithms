#include <bits/stdc++.h>
#define INF 987654321
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	string a[1000];
	int sum=0;
	for(i=0;i<n;i++){
		cin>>a[i];
		int len=a[i].length();
		for(j=0;j<len;j++){
			if(len!=3){
				if(a[i][j]=='0' || a[i][j]=='6'){
					a[i][j]='9';
				}
			}
		}
		sum+=atoi(a[i].c_str());
	}
	printf("%d",(int)round(1.0*sum/n));
}
