#include <stdio.h>
int abs(int a,int b){
	if(a-b<0){
		return b-a;
	}
	else{
		return a-b;
	}
}
int min(int a,int b){
	if(a<b){
		return a;
	}
	else{
		return b;
	}
}
int a[100001];
int main(){
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int answer=0;
	int now=0;
	for(i=0;i<n;i++){
		answer+=a[i]-now;
		answer++;
		now=a[i];
		if(i!=n-1){
			answer++;
			if(now>a[i+1]){
				answer+=now-a[i+1];
				now=a[i+1];
			}
		}
	}
	printf("%d",answer);
}
