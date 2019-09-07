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
using namespace std;
int main(){
	char a[12][7]={0};
	int i,j,k;
	for(i=0;i<12;i++){
		scanf("%s",a[i]);
	}
	int ans=0;
	while(1){
		int check[12][6]={0};
		stack<pair<int,int> >s;
		for(i=0;i<12;i++){
			for(j=0;j<6;j++){
				if(check[i][j]==0 && a[i][j]!='.'){
					queue<pair<int,int> >q;
					q.push(make_pair(i,j));
					check[i][j]=1;
					int cnt=0;
					while(!q.empty()){
						int y=q.front().first;
						int x=q.front().second;
						s.push(make_pair(y,x));
						cnt++;
						q.pop();
						if(y+1<12 && check[y+1][x]==0 && a[y+1][x]==a[y][x]){
							check[y+1][x]=1;
							q.push(make_pair(y+1,x));
						}
						if(x+1<6 && check[y][x+1]==0 && a[y][x]==a[y][x+1]){
							check[y][x+1]=1;
							q.push(make_pair(y,x+1));
						}
						if(y-1>=0 && check[y-1][x]==0 && a[y-1][x]==a[y][x]){
							check[y-1][x]=1;
							q.push(make_pair(y-1,x));
						}
						if(x-1>=0 && check[y][x-1]==0 && a[y][x]==a[y][x-1]){
							check[y][x-1]=1;
							q.push(make_pair(y,x-1));
						}
					}
					if(cnt<4){
						for(k=0;k<cnt;k++){
							s.pop();
						}
					}
				}
			}
		}
		if(s.size()>0){
			ans++;
		}
		else{
			break;
		}
		int size=s.size();
		for(i=0;i<size;i++){
			a[s.top().first][s.top().second]='.';
			s.pop();
		}
		for(i=0;i<6;i++){
			int tail;
			for(j=11;j>=0;j--){
				if(a[j][i]=='.'){
					tail=j;
					break;
				}
			}
			for(j=tail-1;j>=0;j--){
				if(a[j][i]!='.'){
					a[tail--][i]=a[j][i];
					a[j][i]='.';
				}
			}
		}
	}
	printf("%d",ans);
}
