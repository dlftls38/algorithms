#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
vector< pair<int, int> > R;//first = position
vector< pair<int, int> > G;//second = candy
vector< pair<int, int> > B;
int abs(int a,int b){
	return a-b>0 ? a-b : b-a; 
}
int main(){
	int n,s,k;
	scanf("%d%d%d",&n,&s,&k);
	int candy[50]={0};
	int i,j,l;
	for(i=0;i<n;i++){
		scanf("%d",&candy[i]);
	}
	char color[50]={0};
	scanf("%s",color);
	int R_tail=0;
	int G_tail=0;
	int B_tail=0;
	for(i=0;i<n;i++){
		if(color[i]=='R'){
			R.push_back(make_pair(i+1,candy[i]));
			R_tail++;
		}
		else if(color[i]=='G'){
			G.push_back(make_pair(i+1,candy[i]));
			G_tail++;
		}
		else{
			B.push_back(make_pair(i+1,candy[i]));
			B_tail++;
		}
	}
	int answer=100000000;
	for(i=0;i<R_tail;i++){
		for(j=0;j<G_tail;j++){
			if(R[i].second<G[j].second){
				for(l=0;l<B_tail;l++){
					if(G[j].second<B[l].second && R[i].second+G[j].second+B[l].second>=k && abs(s,R[i].first)+abs(R[i].first,G[j].first)+abs(G[j].first,B[l].first)<answer){
						answer=abs(s,R[i].first)+abs(R[i].first,G[j].first)+abs(G[j].first,B[l].first);
					}
				}
			}
		}
		for(j=0;j<B_tail;j++){
			if(R[i].second<B[j].second){
				for(l=0;l<G_tail;l++){
					if(B[j].second<G[l].second && R[i].second+B[j].second+G[l].second>=k && abs(s,R[i].first)+abs(R[i].first,B[j].first)+abs(B[j].first,G[l].first)<answer){
						answer=abs(s,R[i].first)+abs(R[i].first,B[j].first)+abs(B[j].first,G[l].first);
					}
				}
			}
		}
	}
	for(i=0;i<G_tail;i++){
		for(j=0;j<R_tail;j++){
			if(G[i].second<R[j].second){
				for(l=0;l<B_tail;l++){
					if(R[j].second<B[l].second && G[i].second+R[j].second+B[l].second>=k && abs(s,G[i].first)+abs(G[i].first,R[j].first)+abs(R[j].first,B[l].first)<answer){
						answer=abs(s,G[i].first)+abs(G[i].first,R[j].first)+abs(R[j].first,B[l].first);
					}
				}
			}
		}
		for(j=0;j<B_tail;j++){
			if(G[i].second<B[j].second){
				for(l=0;l<R_tail;l++){
					if(B[j].second<R[l].second && G[i].second+B[j].second+R[l].second>=k && abs(s,G[i].first)+abs(G[i].first,B[j].first)+abs(B[j].first,R[l].first)<answer){
						answer=abs(s,G[i].first)+abs(G[i].first,B[j].first)+abs(B[j].first,R[l].first);
					}
				}
			}
		}
	}
	for(i=0;i<B_tail;i++){
		for(j=0;j<R_tail;j++){
			if(B[i].second<R[j].second){
				for(l=0;l<G_tail;l++){
					if(R[j].second<G[l].second && B[i].second+R[j].second+G[l].second>=k && abs(s,B[i].first)+abs(B[i].first,R[j].first)+abs(R[j].first,G[l].first)<answer){
						answer=abs(s,B[i].first)+abs(B[i].first,R[j].first)+abs(R[j].first,G[l].first);
					}
				}
			}
		}
		for(j=0;j<G_tail;j++){
			if(B[i].second<G[j].second){
				for(l=0;l<R_tail;l++){
					if(G[j].second<R[l].second && B[i].second+G[j].second+R[l].second>=k && abs(s,B[i].first)+abs(B[i].first,G[j].first)+abs(G[j].first,R[l].first)<answer){
						answer=abs(s,B[i].first)+abs(B[i].first,G[j].first)+abs(G[j].first,R[l].first);
					}
				}
			}
		}
	}
	if(answer==100000000){
		printf("-1");
	}
	else{
		printf("%d",answer);
	}
}
