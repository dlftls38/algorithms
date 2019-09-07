#include <stdio.h>
#include <algorithm>
#include <string>
#include <string.h>
#include <iostream>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int i,j,k;
		pair <int,string> s[10000];
		int position[11]={0};
		for(i=0;i<n;i++){
			cin >> s[i].second;
			s[i].first=s[i].second.length();
		}
		sort(s,s+n);
		for(i=0;i<n;i++){
			position[s[i].first]=i;
		}
		int flag=1;
		for(i=0;i<n;i++){
			for(j=position[s[i].first]+1;j<n;j++){
				for(k=0;k<s[i].first;k++){
					if(s[i].second[k]!=s[j].second[k]){
						flag=0;
						break;
					}
				}
				if(flag==1){
					break;
				}
			}
			if(flag==1){
				break;
			}
		}
		if(flag==0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}
