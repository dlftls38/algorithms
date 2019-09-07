#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int score[1000]={0};
		pair<int,int> a[1000];
		int so[1000];
		int i;
		for(i=0;i<n;i++){
			int x;
			scanf("%d%d",&a[i].first,&x);
			a[i].second=i;
			a[i].first+=x;
			score[i]+=a[i].first;
		}
		sort(a,a+n);
		for(i=0;i<n;i++){
			so[i]=a[i].second;
		}
		for(i=0;i<n;i++){
			int x;
			scanf("%d%d",&a[i].first,&x);
			a[i].first+=x;
			score[so[i]]+=a[i].first;
		}
		sort(score,score+n);
		printf("%d\n",score[n-1]);
	}
}
