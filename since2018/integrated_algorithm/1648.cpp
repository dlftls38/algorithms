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
    //���� ä�����ٸ�
    if(pos == n * m && bit == 0)
        return 1;
    //���� ���
	if(pos >= n * m)
		return 0;
	int &result = dp[pos][bit];
	if(result != -1)
		return result;
	result = 0;
	//�ش� ĭ�� ĥ�����ִٸ� �� ĭ�� Ȯ��
	if(bit & 1)
		result = tiling(pos + 1, (bit >> 1));
	else{
		//�ش� ĭ�� ���� ��ġ���� �׻� �»���̶�� �����ϰ� Ǭ��
		//2 * 1
		result = tiling(pos + 1, (bit >> 1) | (1 << (m - 1)));
		//1 * 2
		//M - 1��° Ÿ�Ͽ� ��ġ���� �ʾҰ�(�̷� ��� 1 * 2�� ���� �� �����ϴ�.) ����ĭ�� ������� ���
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
