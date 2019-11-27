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
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		int len_a=a.length();
		int len_b=b.length();
		int i;
		vector<int>pos_a;
		vector<int>pos_b;
		for(i=0;i<len_a;i++){
			if(a[i]=='a'){
				pos_a.push_back(i);
			}
			else{
				pos_b.push_back(i);
			}
		}
		int ans=0;
		int tail_a=0;
		int tail_b=0;
		int flag=0;
		for(i=0;i<len_a;i++){
			if(a[i]!=b[i]){
				if(b[i]=='a'){
					while(pos_a.size()>tail_a && pos_a[tail_a]<i){
						tail_a++;
					}
					if(pos_a.size()>tail_a){
						ans+=pos_a[tail_a]-i;
						a[pos_a[tail_a]]='b';
						tail_a++;
					}
					else{
						flag=1;
						break;
					}
				}
				else{
					while(pos_b.size()>tail_b && pos_b[tail_b]<i){
						tail_b++;
					}
					if(pos_b.size()>tail_b){
						ans+=pos_b[tail_b]-i;
						a[pos_b[tail_b]]='a';
						tail_b++;
					}
					else{
						flag=1;
						break;
					}
				}
			}
			a[i]=b[i];
		}
		if(flag==1 || a.compare(b)!=0){
			printf("-1\n");
		}
		else{
			printf("%d\n",ans);
		}
	}
}
