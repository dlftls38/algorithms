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
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
char mp[3000][3000]={0};
string s;
int pos;
void solve(int sy,int sx,int ey,int ex){
	int i,j;
	if(s[pos]=='Q'){
		pos++;
		solve(sy,sx,(sy+ey)/2,(sx+ex)/2);
		solve(sy,(sx+ex)/2,(sy+ey)/2,ex);
		solve((sy+ey)/2,sx,ey,(sx+ex)/2);
		solve((sy+ey)/2,(sx+ex)/2,ey,ex);
	}
	else{
		for(i=sy;i<ey;i++){
			for(j=sx;j<ex;j++){
				if(s[pos]=='W'){
					mp[i][j]='W';
				}
				else{
					mp[i][j]='B';
				}
			}
		}
		pos++;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	cin>>s;
	solve(0,0,n,n);
	printf("#define quadtree_width %d\n",n);
	printf("#define quadtree_height %d\n",n);
	printf("static char quadtree_bits[] = {\n");
	int i,j,k,l;
	for(i=0;i<n;i++){
		for(j=0;j<n/8;j++){
			printf("0x");
			int cnt=0;
			for(k=4;k<8;k++){
				if(mp[i][j*8+k]=='B')
					cnt+=(1<<(k-4));
			}
			if(cnt>=10){
				cnt-=10;
				cnt+='a';
			}
			else{
				cnt+='0';
			}
			printf("%c",cnt);
			cnt=0;
			for(k=0;k<4;k++){
				if(mp[i][j*8+k]=='B')
					cnt+=(1<<(k));
			}
			if(cnt>=10){
				cnt-=10;
				cnt+='a';
			}
			else{
				cnt+='0';
			}
			printf("%c",cnt);
			printf(",");
		}
		printf("\n");
	}
	printf("};\n");
}
