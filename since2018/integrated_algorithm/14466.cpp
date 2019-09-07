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
vector<int>link[10001];
int exist[10001];
int main(){
	int n,k,r;
	scanf("%d%d%d",&n,&k,&r);
	int i,j;
	for(i=0;i<r;i++){
		int r1,c1,r2,c2;
		scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
		link[(r1-1)*n+c1].push_back((r2-1)*n+c2);
		link[(r2-1)*n+c2].push_back((r1-1)*n+c1);
	}
	vector<pair<int,int> >cow;
	for(i=0;i<k;i++){
		int rr,cc;
		scanf("%d%d",&rr,&cc);
		cow.push_back({rr,cc});
		exist[(rr-1)*n+cc]=1;
	}
	int ans=0;
	for(auto it : cow){
		int check[10001]={0};
		int y=it.first;
		int x=it.second;
		int number1=(y-1)*n+x;
		queue<pair<int,int> >q;
		q.push({y,x});
		check[number1]=1;
		while(!q.empty()){
			y=q.front().first;
			x=q.front().second;
			int pos = (y-1)*n+x;
			q.pop();
			int number2=(y-1+1)*n+(x);
			if(y+1<=n && check[number2]==0 && find(link[pos].begin(),link[pos].end(),number2)==link[pos].end()){
				check[number2]=1;
				q.push({y+1,x});
				if(exist[number2]){
					ans++;
				}
			}
			number2=(y-1)*n+(x+1);
			if(x+1<=n && check[number2]==0 && find(link[pos].begin(),link[pos].end(),number2)==link[pos].end()){
				check[number2]=1;
				q.push({y,x+1});
				if(exist[number2]){
					ans++;
				}
			}
			number2=(y-1-1)*n+(x);
			if(y-1>=1 && check[number2]==0 && find(link[pos].begin(),link[pos].end(),number2)==link[pos].end()){
				check[number2]=1;
				q.push({y-1,x});
				if(exist[number2]){
					ans++;
				}
			}
			number2=(y-1)*n+(x-1);
			if(x-1>=1 && check[number2]==0 && find(link[pos].begin(),link[pos].end(),number2)==link[pos].end()){
				check[number2]=1;
				q.push({y,x-1});
				if(exist[number2]){
					ans++;
				}
			}
		}
	}
	printf("%d",(k-1)*(k)/2-ans/2);
}
