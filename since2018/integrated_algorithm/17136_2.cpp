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
int board[23][23];
int ans=INF;
int p[6],sum,cur;
void solve(){
	int i,j,k,l,m;
//	printf("\n");
//	for(i=0;i<10;i++){
//		for(j=0;j<10;j++){
//			printf("%d ",board[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//	printf("\n");
//	printf("%d %d %d %d %d   %d, %d\n",p[1],p[2],p[3],p[4],p[5],sum,cur);
//	printf("\n");
//	printf("\n");
	if(sum==cur){
		ans=min(ans,p[1]+p[2]+p[3]+p[4]+p[5]);
		return;
	}
	if(p[1]+p[2]+p[3]+p[4]+p[5]==25){
		return;
	}
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(board[i][j]==1){
				int flag;
				for(k=5;k>=1;k--){
					if(p[k]==5){
						flag=1;
						continue;
					}
					flag=0;
					for(l=i;l<i+k;l++){
						for(m=j;m<j+k;m++){
							if(board[l][m]==0){
								flag=1;
								break;
							}
						}
						if(flag==1){
							break;
						}
					}
					if(flag==0){
						break;
					}
				}
				for(k=k;k>=1;k--){
					if(p[k]==5){
						continue;
					}
					for(l=i;l<i+k;l++){
						for(m=j;m<j+k;m++){
							board[l][m]=0;
						}
					}
					p[k]++;
					cur+=k*k;
					solve();
					p[k]--;
					cur-=k*k;
					for(l=i;l<i+k;l++){
						for(m=j;m<j+k;m++){
							board[l][m]=1;
						}
					}
				}
				return;
			}
		}
	}
}
int main(){
	int i,j;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			cin>>board[i][j];
			sum+=board[i][j];
		}
	}
	solve();
	printf("%d",ans==INF?-1:ans);
}
