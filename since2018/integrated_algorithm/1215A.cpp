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
	int a1,a2,k1,k2;
	scanf("%d%d%d%d",&a1,&a2,&k1,&k2);
	if(k1>k2){
		swap(k1,k2);
		swap(a1,a2);
	}
	int n;
	scanf("%d",&n);
	int i,j;
	int max_ans=0;
	int temp=n;
	int temp_max_ans=0;
	if(temp/k1>=a1){
		temp_max_ans+=a1;
		temp-=a1*k1;
	}
	else{
		temp_max_ans+=temp/k1;
		temp-=temp/k1*k1;
	}
	if(temp/k2>=a2){
		temp_max_ans+=a2;
	}
	else{
		temp_max_ans+=temp/k2;
	}
	max_ans=max(max_ans,temp_max_ans);
	int min_ans=INF;
	temp=n;
	temp-=(k1-1)*a1+(k2-1)*a2;
	if(temp<0)temp=0;
	min_ans=min(min_ans,min(temp,a1+a2));
	printf("%d %d",min_ans,max_ans);
}
