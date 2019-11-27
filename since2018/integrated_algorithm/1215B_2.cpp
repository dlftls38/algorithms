#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n; 
	scanf("%d",&n);
	vector <int> a(n);
	long long negative=0,positive=0;
	map<string,int>cnt;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]<0){
			swap(cnt["positive"],cnt["negative"]);
			cnt["negative"]++;
		}
		else{
			cnt["positive"]++;
		}
		positive+=cnt["positive"];
		negative+=cnt["negative"];
	}
	printf("%lld %lld",negative,positive);
}
