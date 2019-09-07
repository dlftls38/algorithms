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
	string m;
	cin>>m;
	int len=m.length();
	int n;
	scanf("%d",&n);
	int i,j;
	string ans_word;
	double ans_power=-1;
	for(i=0;i<n;i++){
		string w;
		cin>>w;
		int w_len=w.length();
		int power;
		scanf("%d",&power);
		if(w_len>len){
			int pos=0;
			for(j=0;j<w_len;j++){
				if(m[pos]==w[j]){
					pos++;
				}
				if(pos==len)break;
			}
			if(pos==len){
				if(ans_power<1.0*power/(w_len-len)){
					ans_power=1.0*power/(w_len-len);
					ans_word=w;
				}
			}
		}
	}
	if(ans_power==-1){
		printf("No Jam");
	}
	else{
		printf("%s",ans_word.c_str());
	}
}
