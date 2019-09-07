#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int min(int a,int b){
	if(a<b)
		return a;
	else
		return b;
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i;
	int odd_a=0;
	int odd_b=0;
	int even_a=0;
	int even_b=0;
	for(i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		if(a%2==0)
			even_a++;
		else
			odd_a++;
	}
	for(i=0;i<m;i++){
		int b;
		scanf("%d",&b);
		if(b%2==0)
			even_b++;
		else
			odd_b++;
	}
	printf("%d",min(even_a,odd_b)+min(odd_a,even_b));
}