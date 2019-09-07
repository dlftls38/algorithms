#include <cstdio>

int main(){
	int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int Y,M,D,n,hi=0;
	scanf("%d",&n);
	scanf("%d-%d-%d",&Y,&M,&D);
	
	for(int i=0;i<n;i++){
		int cnt=0;
		if(M>2){
			if(Y%4==0){
				if(Y%100==0){
					if(Y%400==0){
						cnt++;
					}	
				}
				else
					cnt++;
			}
		}
		for(int j=1;j<M;j++){
			cnt+=day[j];
		}
		cnt+=D;
		char name[15]={0};
		int y,m,d;
		scanf("%s %d-%d-%d",name,&y,&m,&d);
		if(m<=2){
			if(Y%4==0){
				if(Y%100==0){
					if(Y%400==0){
						if(!(m==2&&d==29)){
							cnt++;
						}
					}	
				}
				else{
					if(!(m==2&&d==29)){
						cnt++;
					}
				}
			}
		}
		for(int j=m+1;j<=12;j++){
			cnt+=day[j];
		}
		cnt+=day[m]-d;
		for(int j=y+1;j<Y;j++){
			if(j%4==0){
				if(j%100==0){
					if(j%400==0){
						cnt+=366;
					}	
				}
				else{
					cnt+=366;
				}
					
			}
			else{
				cnt+=365;
			}
		}
		if(1/*cnt>=7777*/){
			hi++;
			printf("%s\n",name);
		}
		
	}
	if(hi==0){
		printf("Not Found");
	}
}
