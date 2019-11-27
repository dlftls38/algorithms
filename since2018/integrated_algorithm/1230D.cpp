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
pair<long long,long long> ab[7777];
int main(){
    int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%lld",&ab[i].first);
	}
	for(i=0;i<n;i++){
		scanf("%lld",&ab[i].second);
	}
    sort(ab,ab+n);
    reverse(ab,ab+n);
    vector<long long>two;
    set<long long>check;
    for(i=0;i<n-1;i++){
    	if(ab[i].first==ab[i+1].first && check.find(ab[i].first)==check.end()){
    		two.push_back(i);
    		check.insert(ab[i].first);
		}
	}
	long long ans=0;
	int checkcheck[7777]={0};
	for(auto it : two){
		long long temp=ab[it].second;
		vector<int>compo;
		compo.push_back(it);
		if(checkcheck[it]==1){
			continue;
		}
		for(i=it+1;i<n;i++){
			for(j=0;j<compo.size();j++){
				if(checkcheck[i]==0 && (ab[compo[j]].first&ab[i].first)==ab[i].first || check.find(ab[i].first)!=check.end()){
					temp+=ab[i].second;
					compo.push_back(i);
					checkcheck[i]=1;
					break;
				}	
			}
		}
		ans=max(ans,temp);
	}
	printf("%lld",ans);
}
