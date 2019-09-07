#include <cstdio>
#include <algorithm>
int main(){
	int a[300001],n,i,j,k,count,result=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	std::sort(a,a+n);
	for(i=0;i<n;i++){
		k=n;
		count=0;
		for(j=0;j<n;j++){
			if(i!=j){
				k--;
				if(a[i]+n>=a[j]+k){
					count++;
				}
				else break;
			}
		}
		if(count==n-1) result++;
	}
	printf("%d",result);
}
