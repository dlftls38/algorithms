#include <stdio.h>
int min = 100000000;
int main(){
	int n,m,except[10]={0},i,j,z,u,k,p,count;
	scanf("%d%d",&n,&m);
	for(i=0;i<m;i++){
		scanf("%d",&k);
		except[k]=1;
	}
	for(i=0;i<1000000;i++){
		k=i;
		u=1000000;
		count=7;
		for(j=0;j<7;j++){
			if(k/u>0 || i==0){
				if(i==0) count=1;
				p=1;
				for(z=j;z<7;z++){
					if(except[k/u]==0){
						k%=u;
						u/=10;
					}
					else{
						p=0;
						break;
					}
				}
				if(p==1){
					if(i-n>=0 && min>i-n+count) min=i-n+count;
					if(n-i>=0 && min>n-i+count) min=n-i+count;
				}
				break;
			}
			else{
				count--;
				u/=10;
			}
		}
	}
	if(100-n>=0 && min>100-n) min=100-n;
	if(n-100>=0 && min>n-100) min=n-100;
	printf("%d",min);
}
