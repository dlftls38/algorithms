#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int n;
	int a[100]={0};
	scanf("%d",&n);
	int answer=0;
	for(int i=0;i<n;i++){
		int x;
		scanf("%d",&a[i]);
		answer+=a[i];
	}
	answer*=10;
	int result=0;
	sort(a,a+n);
	for(int i=0;i<n;i++){
		if(answer/n>=45){
			break;
		}
		answer+=50-a[i]*10;
		result++;
	}
	printf("%d",result);
}
