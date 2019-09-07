#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
using namespace std;
int a[200000];
int n;
int abs(int q){
	if(q<0){
		return -q;
	}
	else{
		return q;
	}
}
int main()
{
	int n,t;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>t;
		a[i]=abs(t);
	}
	sort(a+1,a+n+1);
	long long ans=0;
//	for(int i=1;i<=n;i++)	{
//		printf("%d ",a[i]);
//	}
//	printf("\n");
	for(int i=1;i<=n;i++)
	{
		 int pos=upper_bound(a+1,a+n+1,2*a[i])-a;
		//printf("! %d !\n",pos);
		 ans+=(pos-1-(i+1)+1);
	}
	cout<<ans<<endl;
	return 0;
}
