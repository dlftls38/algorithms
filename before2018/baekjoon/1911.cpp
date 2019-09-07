#include <stdio.h>
#include <algorithm>
using namespace std;
pair<int,int> a[10000];
int main(){
	int n,l;
	scanf("%d %d",&n,&l);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i].first,&a[i].second);
	}
	sort(a,a+n);
	int start = a[0].first;
	int end = a[0].second;
	int sum=0;
	for(i=1;i<n;i++){
		if(a[i].first<=end){
			end = a[i].second;
		}
		else{
			int count=(end-start)/l;
			if((end-start)%l>0){
				count++;
			}
			sum+=count;
			start+=count*l;
			if(a[i].first>start){
				start = a[i].first;
			}
			end = a[i].second;
		}
	}
	int count=(end-start)/l;
		if((end-start)%l>0){
			count++;
		}
	sum+=count;
	printf("%d",sum);
}
