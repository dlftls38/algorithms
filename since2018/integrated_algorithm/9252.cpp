#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <functional> 
#include <limits.h>
using namespace std;
int check[1001][1001];
int main(){
	string a,b;
	cin>>a>>b;
	int lena=a.length();
	int lenb=b.length();
	int i,j;
	for(i=1;i<=lena;i++){
		for(j=1;j<=lenb;j++){
			if(a[i-1]==b[j-1]){
				check[i][j]=check[i-1][j-1]+1;
			}
			else{
				check[i][j]=max(check[i][j-1],check[i-1][j]);
			}
		}
	}
	printf("%d\n",check[lena][lenb]);
	string s;
	while(check[lena][lenb]!=0){
		if(check[lena][lenb]==check[lena-1][lenb]){
			lena--;
		}
		else if(check[lena][lenb]==check[lena][lenb-1]){
			lenb--;
		}
		else if(check[lena][lenb]==check[lena-1][lenb-1]+1){
			lena--;
			lenb--;
			s=a[lena]+s;
		}
	}
	printf("%s",s.c_str());
}
