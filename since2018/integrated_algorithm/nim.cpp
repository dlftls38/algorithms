#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int a[50]={0};
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	int count=0;
	for(int i=0;i<n;i++)
		if(a[0]==a[i])
			count++;
	if(count<=n/2)
		printf("Alice");
	else
		printf("Bob");
}