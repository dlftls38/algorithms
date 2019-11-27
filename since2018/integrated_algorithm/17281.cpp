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
int main(){
	int n;
	cin>>n;
	int i,j;
	int input[66][10];
	for(i=0;i<n;i++){
		for(j=0;j<9;j++){
			cin>>input[i][j];
		}
	}
	int rotate=1;
	for(i=2;i<=8;i++){
		rotate*=i;
	}
	vector<int>original;
	for(i=1;i<=8;i++){
		original.push_back(i);
	}
	int ans=0;
	while(rotate--){
		vector<int>copy=original;
		copy.insert(copy.begin()+3,0);
		next_permutation(original.begin(),original.end());
		int score=0;
		int cur=0;
		int ining =0;
		while(ining<n){
			int out=0;
			int state[4]={0};
			while(out<3){
				//printf("%d %d %d %d\n",ining,out,input[ining][copy[cur]],score);
				if(input[ining][copy[cur]]==1){
					if(state[3]==1){
						score++;
						state[3]=0;
					}
					if(state[2]==1){
						state[3]=1;
						state[2]=0;
					}
					if(state[1]==1){
						state[2]=1;
						state[1]=0;
					}
					state[1]=1;
				}
				else if(input[ining][copy[cur]]==2){
					if(state[3]==1){
						score++;
						state[3]=0;
					}
					if(state[2]==1){
						score++;
						state[2]=0;
					}
					if(state[1]==1){
						state[3]=1;
						state[1]=0;
					}
					state[2]=1;
				}
				else if(input[ining][copy[cur]]==3){
					if(state[3]==1){
						score++;
						state[3]=0;
					}
					if(state[2]==1){
						score++;
						state[2]=0;
					}
					if(state[1]==1){
						score++;
						state[1]=0;
					}
					state[3]=1;
				}
				else if(input[ining][copy[cur]]==4){
					if(state[3]==1){
						score++;
						state[3]=0;
					}
					if(state[2]==1){
						score++;
						state[2]=0;
					}
					if(state[1]==1){
						score++;
						state[1]=0;
					}
					score++;
				}
				else{
					out++;
				}
				cur = (cur+1)%9;
			}
			ining++;
		}
		ans=max(ans,score);
	}
	printf("%d",ans);
}
