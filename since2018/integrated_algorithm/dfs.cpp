#include <cstdio>
#include <cstring>

int Y,X,map[503][503];
int dp[503][503];

int down(int sy,int sx){
	int &ret = dp[sy][sx];
	if(ret != -1) return ret;
	if(sy == Y && sx == X) return 1;
	ret = 0;
	if(sy-1 >= 1 && map[sy][sx] > map[sy-1][sx])
		ret += down(sy-1,sx);
	if(sx-1 >= 1 && map[sy][sx] > map[sy][sx-1])
		ret += down(sy,sx-1);
	if(sy+1 <= Y && map[sy][sx] > map[sy+1][sx])
		ret += down(sy+1,sx);
	if(sx+1 <= X && map[sy][sx] > map[sy][sx+1])
		ret += down(sy,sx+1);
	return ret;
}

int main(){
	memset(dp,-1,sizeof(dp));
	scanf("%d%d",&Y,&X);
	for(int i=1;i<=Y;i++) for(int j=1;j<=X;j++) scanf("%d",&map[i][j]);
	printf("%d\n",down(1,1));
}
