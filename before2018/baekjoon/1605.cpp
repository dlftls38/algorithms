#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;
int main(){
	printf("%d\n",sizeof(string&));
	int l;
	string s;
	scanf("%d",&l);
	cin >> s;
	int i,j;
	vector<string> v;
	for(i=0;i<l;i++){
		v.push_back(s.substr(i,l-i));
	}
	sort(v.begin(),v.end());
	int max=0;
	for(i=0;i<l-1;i++){
		int count=0;
		for(j=0;j<v[i].size();j++){
			if(v[i][j]==v[i+1][j]){
				count++;
			}
			else{
				break;
			}
		}
		if(max<count){
			max = count;
		}
	}
	printf("%d",max);
}
