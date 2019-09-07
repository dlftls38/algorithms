#include <stdio.h>
int a[60][60];
int h,w,k;
int result;
void bluecrab(int y,int x,int count){
	if(y==h+2){
		return;
	}
	else if(x==w+2){
		bluecrab(y+1,2,count);
	}
	else{
		if(a[y][x+2]+a[y][x+1]+a[y][x-2]+a[y][x-1]==0){
			count++;
			a[y][x]=1;
			if(k==count){
				result++;
				result%=1000000007;
			}
			bluecrab(y,x+1,count);
			count--;
			a[y][x]=0;
		}
		bluecrab(y,x+1,count);
	}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d",&h,&w,&k);
		int i,j;
		for(i=0;i<60;i++){
			for(j=0;j<60;j++){
				a[i][j]=0;
			}
		}
		result=0;
		bluecrab(2,2,0);
		printf("%d\n",result);
	}
}
