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
	int n;
	scanf("%d",&n);
	while(n--){
		char a[81]={0};
		scanf("%s",a);
		int b[81]={0};
		int ans=0;
		for(int i=0;i<strlen(a);i++){
			if(a[i]=='O'){
				if(i>0 && b[i-1]>0){
					b[i]=b[i-1]+1;
				}
				else{
					b[i]=1;
				}
				ans+=b[i];
			}
		}
		printf("%d\n",ans);
	}
}
