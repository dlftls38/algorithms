#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int a[100010];
int check[100010];
int already[100010];
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int i;
	for(i=0;i<k;i++){
		scanf("%d",&a[i]);
		check[a[i]]++;
	}
	int count=0;
	for(i=1;i<n+1;i++){
		if(check[i]==0){
			if(i>1){
				count++;
			}
			count++;
			if(i<n){
				count++;
			}
		}
	}
	for(i=0;i<k;i++){
		if(already[a[i]]==0){
			if(a[i]>1 && check[a[i]-1]==0){
				count++;
			}
			if(a[i]<n && check[a[i]+1]==0){
				count++;
			}
			already[a[i]]=-1;
		}
		check[a[i]]--;
	}
	printf("%d",count);
}
