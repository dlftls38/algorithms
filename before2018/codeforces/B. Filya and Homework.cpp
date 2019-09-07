#include <stdio.h>
#include <algorithm>
using namespace std;
long long a[100001];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	sort(a,a+n);
	long long q[3];
	int count=1;
	q[0]=a[0];
	for(int i=1;i<n;i++){
		if(a[i-1]!=a[i]){
			if(count==3){
				count++;
				break;
			}
			q[count++]=a[i];
		}
	}
	if(count<=3){
		if(count==1 || count==2) printf("YES");
		else if(count==3 && q[1]-q[0]==q[2]-q[1]) printf("YES");
		else{
			printf("NO");	
		}
	}
	else{
		printf("NO");
	}
}
