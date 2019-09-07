#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int l,t,n;
	scanf("%d%d%d",&l,&t,&n);
	int i,j;
	int a[10]={0};
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	int count=0;
	int check[10]={0};
	for(i=n-1;i>-1;i--){
		count+=l/a[i];
		check[i]+=l/a[i];
		l%=a[i];
	}
	while(l>0){
		for(i=n-1;i>-1;i--){
			if(check[i]>0){
				break;
			}
		}
		if(i==0){
			break;
		}
		check[i]--;
		count--;
		l+=a[i];
		for(i=i-1;i>-1;i--){
			count+=l/a[i];
			check[i]+=l/a[i];
			l%=a[i];
		}
	}
	if(l>0){
		printf("I sincerely apologize for being late");
	}
	else{
		if(t<count){
			printf("I sincerely apologize for being late");
		}
		else{
			printf("%d",count);
		}
	}
}
