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
int staff[400][400];
int check[400][400];
struct gift{
	int y,x;
};
struct work{
	int y,x,left_time;
};
int main(){
	int b,n,m;
	scanf("%d%d%d",&b,&n,&m);
	int i,j;
	for(i=0;i<n;i++){
		int r,c,t;
		scanf("%d%d%d",&r,&c,&t);
		staff[r][c]=t;
	}
	vector<gift>belt;
	vector<work>processing;
	int cur_gift=0;
	int ans=0;
	while(1){
		if(cur_gift<m){
			cur_gift++;
			belt.push_back({0,0});
		}
		int belt_size=belt.size();
		//printf("--------------------\n");
		for(i=0;i<belt_size;i++){
			int yy=belt[i].y;
			int xx=belt[i].x;
			if(yy-1>=0 && staff[yy-1][xx]>0 && check[yy-1][xx]==0){
				//printf("!\n");
				check[yy-1][xx]=1;
				processing.push_back({yy-1,xx,staff[yy-1][xx]});
				belt.erase(belt.begin()+i);
				i--;
				belt_size--;
				ans++;
				continue;
			}
			else if(xx-1>=0 && staff[yy][xx-1] && check[yy][xx-1]==0){
				//printf("!\n");
				check[yy][xx-1]=1;
				processing.push_back({yy,xx-1,staff[yy][xx-1]});
				belt.erase(belt.begin()+i);
				i--;
				belt_size--;
				ans++;
				continue;
			}
			else if(staff[yy+1][xx] && check[yy+1][xx]==0){
				//printf("!\n");
				check[yy+1][xx]=1;
				processing.push_back({yy+1,xx,staff[yy+1][xx]});
				belt.erase(belt.begin()+i);
				i--;
				belt_size--;
				ans++;
				continue;
			}
			//printf("%d %d\n",belt[i].y,belt[i].x);
			if(belt[i].y==0 && belt[i].x<b-1){
				belt[i].x++;
			}
			else if(belt[i].y<b-1 && belt[i].x==b-1){
				belt[i].y++;
			}
			else{
				belt[i].x--;
				if(belt[i].x==-1){
					belt.erase(belt.begin()+i);
					i--;
					belt_size--;
				}
			}
			//printf("->%d %d\n",belt[i].y,belt[i].x);
		}
		int process_size=processing.size();
		for(i=0;i<process_size;i++){
			//printf("staff = %d %d %d\n",processing[i].y,processing[i].x,processing[i].left_time);
			processing[i].left_time--;
			if(processing[i].left_time==0){
				check[processing[i].y][processing[i].x]=0;
				processing.erase(processing.begin()+i);
				i--;
				process_size--;
			}
		}
		if(belt.size()==0 && cur_gift==m){
			break;
		}
	}
	printf("%d",ans);
}
