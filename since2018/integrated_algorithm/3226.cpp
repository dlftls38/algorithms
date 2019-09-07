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
	scanf("%d",&n);
	int i,j;
	int ans=0;
	for(i=0;i<n;i++){
		string time;
		cin>>time;
		int h=(time[0]-'0')*10+(time[1]-'0');
		int m=(time[3]-'0')*10+(time[4]-'0');
		int len;
		scanf("%d",&len);
		if(h>=7 && h<=18){
			if(h==18 && m+len>60){
				ans+=(60-m)*10;
				ans+=(m+len-60)*5;
			}
			else{
				ans+=(len)*10;
			}
		}
		else{
			if(h==6 && m+len>60){
				ans+=(60-m)*5;
				ans+=(m+len-60)*10;
			}
			else{
				ans+=(len)*5;
			}
		}
	}
	printf("%d",ans);
}
