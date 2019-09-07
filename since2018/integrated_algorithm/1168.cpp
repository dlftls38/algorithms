#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	vector<int>v;
	int i,j;
	for(i=1;i<=n;i++){
		v.push_back(i);
	}
	int position=0;
	int len=n;
	printf("<");
	for(i=0;i<n;i++){
		position+=k-1;
		if(position>=len){
			position=(position%len);
		}
		vector<int>::iterator iter=v.begin();
		iter+=position;
		printf("%d",*iter);
		if(i!=n-1){
			printf(", ");
		}
		v.erase(iter);
		len--;
		if(position==len+1){
			position=0;
		}
	}
	printf(">");
}
