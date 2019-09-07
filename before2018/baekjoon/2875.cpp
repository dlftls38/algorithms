#include <stdio.h>
int main(){
	int n,m,k,team=0,in=0;
	scanf("%d%d%d",&n,&m,&k);
	while(1){
		if(n>1 && m>0){
			n-=2;
			m--;
			team++;
		}
		else{
			break;
		}
	}
	while(1){
		if(n>0){
			n--;
			in++;
		}
		if(m>0){
			m--;
			in++;
		}
		if(n+m==0){
			break;
		}
	}
	if(in>=k){
		printf("%d",team);
	}
	else{
		while(1){
			if(team>0){
				team--;
				in+=3;
			}
			if(in>=k){
				printf("%d",team);
				break;
			}
		}
	}
}
