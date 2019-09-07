#include <stdio.h>

float team1[1000],team2[1000];
float w[1000];

int main(){
	
	int t,n,m,a,b,p,q,i,j,max=-1,min=1000000;
	
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
		
		scanf("%d%d",&n,&m);
		for(j=0;j<m;j++){
			
			scanf("%d%d%d%d",&a,&b,&p,&q);
			team1[a]+=p;
			team1[b]+=q;
			team2[a]+=q;
			team2[b]+=p;
		}
		for(j=1;j<n+1;j++){
			
			if(team1[j]==0 && team2[j]==0){
				
				w[j]=0;
			}
			
			else{
				
				w[j]=1000*((team1[j]*team1[j])/(team1[j]*team1[j]+team2[j]*team2[j]));
			}

		}
		max=-1;
		min=1000000;
		for(j=1;j<n+1;j++){
			
			if(max<w[j]){
				
				max=w[j];
			}
			if(min>w[j]){
				
				min=w[j];
			}
		}
		printf("%d\n%d\n",max,min);
		for(j=1;j<1001;j++){
			
			team1[j]=0;
			team2[j]=0;
			w[j]=0;
			
		}
	}
	
}
