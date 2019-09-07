#include <stdio.h>
int main(){
	int n,i,j,sum=1000000,ya;
	int x[10001];
	int y[10001];
	int z[10001];
	int s[10001][2];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d",&x[i],&y[i],&z[i]);
		s[i][0]=1000000;
		s[i][1]=1000000;
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			ya=0;
			ya+= x[i]-x[j]<0 ? x[j]-x[i]:x[i]-x[j];
			ya+= y[i]-y[j]<0 ? y[j]-y[i]:y[i]-y[j];
			ya+= z[i]-z[j]<0 ? z[j]-z[i]:z[i]-z[j];
			if(s[i][0]>ya){
				s[i][1]=s[i][0];
				s[i][0]=ya;
			}
			else{
				if(s[i][1]>ya){
					s[i][1]=ya;
				}
			}
			if(s[j][0]>ya){
				s[j][1]=s[j][0];
				s[j][0]=ya;
			}
			else{
				if(s[j][1]>ya){
					s[j][1]=ya;
				}
			}
		}
		sum = sum>s[i][0]+s[i][1] ? s[i][0]+s[i][1]:sum;
	}
	sum = sum>s[n-1][0]+s[n-1][1] ? s[n-1][0]+s[n-1][1]:sum;
	printf("%d",sum);
}
