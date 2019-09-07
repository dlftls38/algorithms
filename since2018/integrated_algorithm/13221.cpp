#include <bits/stdc++.h>
#define INF 987654321
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	int n;
	scanf("%d",&n);
	int i;
	int ans_x,ans_y,dist=INF;
	for(i=0;i<n;i++){
		int taxi_x,taxi_y;
		scanf("%d%d",&taxi_x,&taxi_y);
		if(dist>abs(taxi_x-x)+abs(taxi_y-y)){
			dist=abs(taxi_x-x)+abs(taxi_y-y);
			ans_x=taxi_x;
			ans_y=taxi_y;
		}
	}
	printf("%d %d\n",ans_x,ans_y);
}
