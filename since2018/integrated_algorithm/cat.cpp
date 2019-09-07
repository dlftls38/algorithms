#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main(){
	int x;
	scanf("%d",&x);
	int t=0;
	int n[40]={0};
	int tail=0;
	while(1){
		int a[30]={0};
		int count=0;
		int k=x;
		while(k!=0){
			a[count++]=k%2;
			k/=2;
		}
		int i;
		for(i=count-1;i>-1;i--){
			if(a[i]==0){
				break;
			}
		}
		if(i==-1){
			break;
		}
		int xx=(1<<i+1)-1;
		x^=xx;
		t++;
		count=0;
		k=x;
		memset(a,0,30);
		while(k!=0){
			a[count++]=k%2;
			k/=2;
		}
		n[tail++]=i+1;
		for(i=count-1;i>-1;i--){
			if(a[i]==0){
				break;
			}
		}
		if(i==-1){
			break;
		}
		x++;
		t++;
	}
	printf("%d\n",t);
	for(int i=0;i<tail;i++){
		printf("%d ",n[i]);
	}
}
