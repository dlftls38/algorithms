#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
using namespace std;
int main(){
	int k;
	scanf("%d",&k);
	char a[10][10]={0};
	vector <int> maxv;
	vector <int> minv;
	int i;
	for(i=0;i<k;i++){
		scanf("%s",a[i]);
	}
	for(i=9;i>8-k;i--){
		maxv.push_back(i);
	}
	for(i=0;i<k+1;i++){
		minv.push_back(i);
	}
	while(1){
		int check=0;
		for(i=0;i<k;i++){
			if(a[i][0]=='<'){
				if(maxv[i]>maxv[i+1]){
					check=1;
				}
			}
			else{
				if(maxv[i]<maxv[i+1]){
					check=1;
				}
			}
		}
		if(check==1){
			prev_permutation(maxv.begin(),maxv.end());
		}
		else{
			break;
		}
	}
	while(1){
		int check=0;
		for(i=0;i<k;i++){
			if(a[i][0]=='<'){
				if(minv[i]>minv[i+1]){
					check=1;
				}
			}
			else{
				if(minv[i]<minv[i+1]){
					check=1;
				}
			}
		}
		if(check==1){
			next_permutation(minv.begin(),minv.end());
		}
		else{
			break;
		}
	}
	for(i=0;i<k+1;i++){
		printf("%d",maxv[i]);
	}
	printf("\n");
	for(i=0;i<k+1;i++){
		printf("%d",minv[i]);
	}
}
