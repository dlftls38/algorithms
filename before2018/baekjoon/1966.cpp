#include <cstdio>
#include <algorithm>
int main(){
	int t,n,m,i,j;
	scanf("%d",&t);
	while(t--){
		int a[10000]={0},pri[100]={0},ahead=0,prihead=0,count=0;
		scanf("%d%d",&n,&m);
		count=0;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			pri[i]=a[i];
		}
		std::sort(pri,pri+n);
		std::reverse(pri,pri +n);
		while(1){
			if(a[ahead]==pri[prihead]){
				count++;
				if(ahead==m){
					break;
				}
				ahead++;
				prihead++;
			}
			else{
				if(ahead==m){
					m=n;
				}
				a[n++]=a[ahead++];
			}
		}
		printf("%d\n",count);
	}
}
