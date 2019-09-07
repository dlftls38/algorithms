#include <stdio.h>
#include <algorithm>
int main(){
	int n,m,i,j,s,e;
	int board[2001],board2[2001];
	scanf("%d",&n);
	for(i=1;i<n+1;i++){
		scanf("%d",&board[i]);
		board2[i]=board[i];
	}
	scanf("%d",&m);
	while(m--){
		scanf("%d%d",&s,&e);
		std::reverse(&board2[s],&board2[s]+e);
		for(i=1;)
	}
}
