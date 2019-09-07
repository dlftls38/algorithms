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
#define MAX_SIZE 1000001
using namespace std;
int main(){
	int i,j;
    int n, m;
    scanf("%d %d", &n, &m);
    int friends[1001]={0};
    for(i=0;i<m;i++){
        int s1, s2;
        scanf("%d %d", &s1, &s2);
        friends[s1]++;
        friends[s2]++;
    }
    for(i=1;i<=n;i++){
    	printf("%d\n",friends[i]);
	}
}
