#include <stdio.h>
#include <algorithm>
using namespace std;
pair <int,int> down[26];
void pre(int now){
	printf("%c",now+65);
	if(down[now].first!=0){
		pre(down[now].first);
	}
	if(down[now].second!=0){
		pre(down[now].second);
	}
}
void ino(int now){
	if(down[now].first!=0){
		ino(down[now].first);
	}
	printf("%c",now+65);
	if(down[now].second!=0){
		ino(down[now].second);
	}
}
void post(int now){
	if(down[now].first!=0){
		post(down[now].first);
	}
	if(down[now].second!=0){
		post(down[now].second);
	}
	printf("%c",now+65);
}
int main(){
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		char q[2],w[2],e[2];
		scanf("%s%s%s",q,w,e);
		if(w[0]!='.'){
			down[q[0]-65].first=w[0]-65;
		}
		if(e[0]!='.'){
			down[q[0]-65].second=e[0]-65;
		}
	}
	pre(0);
	printf("\n");
	ino(0);
	printf("\n");
	post(0);
}
