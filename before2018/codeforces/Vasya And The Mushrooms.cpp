#include <stdio.h>
int a[2][1000001];
long long answer=0;
int n;
void recursion(int x,int y,int before,int count,long long now){
	if(x==0 && y==0){
		recursion(x+1,y,2,count+1,now+count*a[x][y]);
		for(int i=0;i<n;i++){
			now+=a[0][i]*(count++);
		}
		for(int i=n-1;i>-1;i--){
			now+=a[1][i]*(count++);
		}
		if(answer<now) answer = now;
	}
	else{
		if(count==n*2-1){
			if(answer<now+a[x][y]*count){
				answer=now+a[x][y]*count;
			}
		}
		else if(before==0 || before==2){
			recursion(x,y+1,1,count+1,now+count*a[x][y]);
		}
		else if(before==1){
			if(x==0){
				recursion(x+1,y,2,count+1,now+count*a[x][y]);
				if(y!=n-1){
					for(int i=y;i<n;i++){
						now+=a[0][i]*(count++);
					}
					for(int i=n-1;i>y-1;i--){
						now+=a[1][i]*(count++);
					}
					if(answer<now) answer = now;
				}
			}
			else{
				recursion(x-1,y,0,count+1,now+count*a[x][y]);
				if(y!=n-1){
					for(int i=y;i<n;i++){
						now+=a[1][i]*(count++);
					}
					for(int i=n-1;i>y-1;i--){
						now+=a[0][i]*(count++);
					}
					if(answer<now) answer = now;					
				}
			}
		}
	}
}
int main(){
	int i,j;
	scanf("%d",&n);
	for(i=0;i<2;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	recursion(0,0,0,0,0);
	printf("%lld", answer);
}
