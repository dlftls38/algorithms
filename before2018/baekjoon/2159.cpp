#include <stdio.h>
int abs(int a,int b){
	if(a-b>=0) return a-b;
	else return b-a;
}
int x,y;
int now_x[5],now_y[5],now_top;
int next_x[5],next_y[5],next_top;
int next_check[5];
long long now_count[5],max_count[5],min=1000000000000000;
int main(){
	int n,i,j,k;
	scanf("%d%lld%lld",&n,&now_x[now_top],&now_y[now_top]);
	now_top++;
	for(i=0;i<n;i++){
		scanf("%d%d",&x,&y);
		//if(i%2==0) x=100000,y=100000;
		//else x=0,y=0;
		if(x-1>=1){
			next_check[next_top]=0;
			next_x[next_top]=x-1;
			next_y[next_top++]=y;
		}		
		if(y+1<=100000){
			next_check[next_top]=1;
			next_x[next_top]=x;
			next_y[next_top++]=y+1;
		}	
		if(x+1<=100000){
			next_check[next_top]=2;
			next_x[next_top]=x+1;
			next_y[next_top++]=y;
		}
		if(y-1>=1){
			next_check[next_top]=3;
			next_x[next_top]=x;
			next_y[next_top++]=y-1;
		}
		next_check[next_top]=4;
		next_x[next_top]=x;
		next_y[next_top++]=y;
		for(j=0;j<now_top;j++){
			for(k=0;k<next_top;k++){
				if(next_check[k]==0){
					if(max_count[k]==0){
						max_count[k]=now_count[j]+abs(now_x[j],x-1)+abs(now_y[j],y);
					}
					else{
						if(max_count[k]>now_count[j]+abs(now_x[j],x-1)+abs(now_y[j],y)){
							max_count[k]=now_count[j]+abs(now_x[j],x-1)+abs(now_y[j],y);
						}
					}
				}
				else if(next_check[k]==1){
					if(max_count[k]==0){
						max_count[k]=now_count[j]+abs(now_x[j],x)+abs(now_y[j],y+1);
					}
					else{
						if(max_count[k]>now_count[j]+abs(now_x[j],x)+abs(now_y[j],y+1)){
							max_count[k]=now_count[j]+abs(now_x[j],x)+abs(now_y[j],y+1);
						}
					}
				}
				else if(next_check[k]==2){
					if(max_count[k]==0){
						max_count[k]=now_count[j]+abs(now_x[j],x+1)+abs(now_y[j],y);
					}
					else{
						if(max_count[k]>now_count[j]+abs(now_x[j],x+1)+abs(now_y[j],y)){
							max_count[k]=now_count[j]+abs(now_x[j],x+1)+abs(now_y[j],y);
						}
					}
				}
				else if(next_check[k]==3){
					if(max_count[k]==0){
						max_count[k]=now_count[j]+abs(now_x[j],x)+abs(now_y[j],y-1);
					}
					else{
						if(max_count[k]>now_count[j]+abs(now_x[j],x)+abs(now_y[j],y-1)){
							max_count[k]=now_count[j]+abs(now_x[j],x)+abs(now_y[j],y-1);
						}
					}
				}
				else{
					if(max_count[k]==0){
						max_count[k]=now_count[j]+abs(now_x[j],x)+abs(now_y[j],y);
					}
					else{
						if(max_count[k]>now_count[j]+abs(now_x[j],x)+abs(now_y[j],y)){
							max_count[k]=now_count[j]+abs(now_x[j],x)+abs(now_y[j],y);
						}
					}
				}
			}			
		}
		for(j=0;j<next_top;j++){
			now_x[j]=next_x[j];
			now_y[j]=next_y[j];
			now_count[j]=max_count[j];
			//printf("%d %d %lld\n",now_x[j],now_y[j],now_count[j]);
			max_count[j]=0;
		}
		//printf("\n");
		now_top=next_top;
		next_top=0;
	}
	for(i=0;i<now_top;i++){
		//printf("%lld %lld\n",min,now_count[i]);
		if(min>now_count[i]){
			min=now_count[i];
		}
	}
	printf("%lld",min);
}
