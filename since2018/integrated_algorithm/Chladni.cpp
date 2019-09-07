#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <vector>
using namespace std;
void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int divisor[10000]={0};
	int i,j;
	int tail=0;
	for(i=2;i<=n;i++){
		if(n%i==0){
			divisor[tail++]=i;
		}
	}
	vector < pair < int, int > > origin;
	for(i=0;i<m;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		if(b>a)
			swap(&a,&b);
		origin.push_back(pair< int, int >(a,b));
	}
	sort(origin.begin(),origin.end());
	int result=0;
	for(i=0;i<tail;i++){
		int rotate=n/divisor[i];
		vector < pair < int, int > > compare;
		for(j=0;j<m;j++){
			int a=origin[j].first+rotate;
			int b=origin[j].second+rotate;
			if(a>n)
				a-=n;
			if(b>n)
				b-=n;
			if(b>a)
				swap(&a,&b);
			compare.push_back(pair< int, int >(a,b));
		}
		sort(compare.begin(),compare.end());
		int check=0;
		//printf("--------------\n");
		for(j=0;j<m;j++){
			//printf("\n");
			//printf("%d %d      %d %d\n",origin[j].first,origin[j].second,compare[j].first,compare[j].second);
			//printf("\n");
			if(origin[j].first!=compare[j].first || origin[j].second!=compare[j].second){
				check=1;
				//printf("wrong\n");
			}
		}
		//printf("--------------\n");
		if(check==0)
			result=1;
	}
	if(result==1)
		printf("Yes");
	else
		printf("No");
}
