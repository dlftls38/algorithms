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
#define MOD 9901 
using namespace std;
int n, m;
int dp[14*14][1 << 14];
int tiling(int pos, int bit){
    //전부 채워졌다면
    if(pos == n * m && bit == 0)
        return 1;
    //기저 사례
	if(pos >= n * m)
		return 0;
	int &result = dp[pos][bit];
	if(result != -1)
		return result;
	result = 0;
	//해당 칸이 칠해져있다면 옆 칸을 확인
	if(bit & 1)
		result = tiling(pos + 1, (bit >> 1));
	else{
		//해당 칸은 현재 위치에서 항상 좌상단이라고 가정하고 푼다
		//2 * 1
		result = tiling(pos + 1, (bit >> 1) | (1 << (m - 1)));
		//1 * 2
		//M - 1번째 타일에 위치하지 않았고(이럴 경우 1 * 2를 놓을 수 없습니다.) 다음칸도 비어있을 경우
		if((pos % m) != (m - 1) && (bit & 2) == 0)
		    result += tiling(pos + 2, bit >> 2);
	}
    return result %= MOD;
}
int main(){
	scanf("%d%d",&n,&m);
	memset(dp, -1, sizeof(dp));
	printf("%d",tiling(0, 0));
}
