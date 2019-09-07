#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main(){
	int n;
	int a[1000]={0};
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int sum=0;
	for(i=0;i<n-1;i++){
		if(a[i]==1 && a[i+1]==2){
			sum+=3;
		}
		else if(a[i]==1 && a[i+1]==3){
			sum+=4;
		}
		else if(a[i]==2 && a[i+1]==3){
			sum+=1000000;
		}
		else if(a[i]==2 && a[i+1]==1){
			sum+=3;
		}
		else if(a[i]==3 && a[i+1]==2){
			sum+=1000000;
		}
		else{
			sum+=4;
		}
	}
	for(i=0;i<n-2;i++){
		if(a[i]==3 && a[i+1]==1 && a[i+2]==2){
			sum--;
		}
	}
	if(sum>100000){
		printf("Infinite");
	}
	else{
		printf("Finite\n");
		printf("%d",sum);
	}
}