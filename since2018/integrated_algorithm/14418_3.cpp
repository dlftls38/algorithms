#include <bits/stdc++.h>
#define INF 987654321
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	pair<int,int>p[3];
	for(int i=0;i<3;i++){
		scanf("%d%d",&p[i].first,&p[i].second);

	}
	for(int i=0;i<6;i++){
		for(int j=0;j<8;j++){
			pair<int,int>temp[3];
			temp[0]=p[0];
			temp[1]=p[1];
			temp[2]=p[2];
			for(int k=0;k<3;k++){
				if(j&(1<<k)){
					swap(temp[k].first,temp[k].second);
				}
			}
			if(temp[0].first==temp[1].first && temp[0].second+temp[1].second==temp[2].second && temp[0].first+temp[2].first==temp[2].second){
				printf("YES");
				return 0;
			}
		}
		next_permutation(p,p+3);
	}
	printf("NO");
}
