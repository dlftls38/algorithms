#include <stdio.h>
#include <algorithm>
#include <queue>
using namespace std;
char a[1001][1001];
typedef pair<int,int> position;
queue<position> q;
position num_p[11];
int sum,h,w;
int flag;
void search(int s1,int s2,int e1, int e2,int c[1000][1000]){
	if(flag==1){
		return;
	}
	if(s1==e1 && s2==e2){
		flag=1;
		return;
	}
	if(s1+1<h && c[s1+1][s2]==0 && a[s1+1][s2]!='X'){
		c[s1+1][s2]=c[s1][s2]+1;
		q.push(position(s1+1,s2));
	}
	if(s1-1>=0 && c[s1-1][s2]==0 && a[s1-1][s2]!='X'){
		c[s1-1][s2]=c[s1][s2]+1;
		q.push(position(s1-1,s2));
	}
	if(s2+1<w && c[s1][s2+1]==0 && a[s1][s2+1]!='X'){
		c[s1][s2+1]=c[s1][s2]+1;
		q.push(position(s1,s2+1));
	}
	if(s2-1>=0 && c[s1][s2-1]==0 && a[s1][s2-1]!='X'){
		c[s1][s2-1]=c[s1][s2]+1;
		q.push(position(s1,s2-1));
	}
	int o=q.front().first;
	int oo=q.front().second;
	q.pop();
	search(o,oo,e1,e2,c);
}
int main(){
	int n;
	scanf("%d%d%d",&h,&w,&n);
	int i,j;
	for(i=0;i<h;i++){
		scanf("%s",a[i]);
		for(j=0;j<w;j++){
			if(a[i][j]>='0' && a[i][j]<='9'){
				num_p[a[i][j]-48].first=i;
				num_p[a[i][j]-48].second=j;
			}
			if(a[i][j]=='S'){
				num_p[0].first=i;
				num_p[0].second=j;
			}
		}
	}
	for(i=0;i<n;i++){
		int check[1000][1000]={0};
		flag=0;
		search(num_p[i].first,num_p[i].second,num_p[i+1].first,num_p[i+1].second,check);
		sum+=check[num_p[i+1].first][num_p[i+1].second];
		while(!q.empty()){
			q.pop();
		}
	}
	printf("%d",sum);
}

