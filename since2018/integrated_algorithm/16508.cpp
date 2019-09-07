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
string word;
int book_alphabat[16][26];
int price[16];
int ans=INF;
int n;
int books[16];
int len;
int cur;
void solve(int pos){
	int i;
	if(pos==len){
		ans=min(ans,cur);
		return;
	}
	for(i=0;i<n;i++){
		if(book_alphabat[i][word[pos]-65]>0){
			book_alphabat[i][word[pos]-65]--;
			books[i]++;
			if(books[i]==1){
				cur+=price[i];
			}
			if(cur<ans)
				solve(pos+1);
			book_alphabat[i][word[pos]-65]++;
			books[i]--;
			if(books[i]==0){
				cur-=price[i];
			}
		}
	}
}
int main(){
	cin>>word;
	len=word.length();
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&price[i]);
		string book;
		cin>>book;
		for(j=0;j<book.length();j++){
			book_alphabat[i][book[j]-65]++;
		}
	}
	solve(0);
	printf("%d",ans==INF?-1:ans);
}
