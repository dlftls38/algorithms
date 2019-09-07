#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int a[100]={0};
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	while(1){
		int check=0;
		for(int i=n-2;i>-1;i--){
			if(a[i+1]>a[i]){
				a[i+1]-=a[i];
				sort(a,a+n);
				check=1;
				break;
			}
		}
		if(check==0){
			break;
		}
	}
	int answer=0;
	for(int i=0;i<n;i++){
		answer+=a[i];
	}
	printf("%d",answer);
}
