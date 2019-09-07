#include <bits/stdc++.h>
#define INF 987654321
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int u,l,r,d;
	scanf("%d%d%d%d",&u,&l,&r,&d);
	int i,j;
	string s[10];
	for(i=0;i<m;i++){
		cin>>s[i];
	}
	char crossword[31][31]={0};
	char chess[3]={"#."};
	int cnt=0;
	for(i=10-u;i<10+m+d;i++){
		for(j=10-l;j<10+n+r;j++){
			crossword[i][j]=chess[cnt];
			cnt=(cnt+1)%2;
		}
		if((n+r+l)%2==0){
			cnt=(cnt+1)%2;
		}
	}
	for(i=10;i<10+m;i++){
		for(j=10;j<10+n;j++){
			crossword[i][j]=s[i-10][j-10];
		}
	}
	for(i=10-u;i<10+m+d;i++){
		for(j=10-l;j<10+n+r;j++){
			printf("%c",crossword[i][j]);
		}
		printf("\n");
	}
}
