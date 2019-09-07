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
using namespace std;
int main(){
	int n, min = 50, arr[6]; 
	scanf("%d", &n);
	int i;
	for (i = 0; i < 6; ++i){
		scanf("%d", arr[i]);
		min = min > arr[i] ? arr[i] : min;
	}
	
	if (n == 1){
		int sum = 0, max = 0;
		for (i = 0; i < 6; ++i){
			max = max < arr[i] ? arr[i] : max;
			sum += arr[i];
		}
		printf("%d", sum - max);
	}
	else{
		int a = arr[0], b = arr[1], c = arr[2],
			d = arr[3], e = arr[4], f = arr[5];
		int w = 100, two[12] = { a+b, b+f, f+e, e+a,
			d+a, d+b, d+f, d+e, c+a, c+b, c+f, c+e };
		int h = 150, thr[8] = { a+b+c, b+f+c, f+e+c, e+a+c,
			a+b+d, b+f+d, f+e+d, e+a+d };
		for(i = 0; i < 12; ++i){
			w = w > two[i] ? two[i] : w;	
		}
		for(i = 0; i <  8; ++i){
			h = h > thr[i] ? thr[i] : h;	
		}
		if (n == 2) printf("%d", 4 * h + 4 * w);
		else printf("%ld", 4 * h + (8 * n - 12) * w +
			(n - 2l) * (5 * n - 6) * min);
	}
}
