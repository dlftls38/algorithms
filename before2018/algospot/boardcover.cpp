#include <stdio.h>
int h,w;
int f(char z[21][21]){
	int x,y,p=0,i,j;
	int result =0;
	for(i=0;i<h;i++){
		for(j=0;j<w;j++){
			if(z[i][j]=='.'){
				p=1;
				break;
			}
		}
		if (p==1) break;
	}
	x=i;
	y=j;
	if(p==0) return 1;
	if(x+1<h && y+1<w && z[x][y+1]=='.' && z[x+1][y+1]=='.'){
		z[x][y]='#',z[x][y+1]='#',z[x+1][y+1]='#';
		result+=f(z);
		z[x][y]='.',z[x][y+1]='.',z[x+1][y+1]='.';
	}
	if(x+1<h && y+1<w && z[x+1][y]=='.' && z[x+1][y+1]=='.'){
		z[x][y]='#',z[x+1][y]='#',z[x+1][y+1]='#';
		result+=f(z);
		z[x][y]='.',z[x+1][y]='.',z[x+1][y+1]='.';
	}
	if(x+1<h && y+1<w && z[x][y+1]=='.' && z[x+1][y]=='.'){
		z[x][y]='#',z[x+1][y]='#',z[x][y+1]='#';
		result+=f(z);
		z[x][y]='.',z[x+1][y]='.',z[x][y+1]='.';
	}
	if(x+1<h && y-1>-1 && z[x+1][y]=='.' && z[x+1][y-1]=='.'){
		z[x][y]='#',z[x+1][y]='#',z[x+1][y-1]='#';
		result+=f(z);
		z[x][y]='.',z[x+1][y]='.',z[x+1][y-1]='.';
	}
	return result;
}
int main(){
	int c;
	scanf("%d",&c);
	while(c--){
		char a[21][21]={0},i,j;
		scanf("%d%d",&h,&w);
		for(i=0;i<h;i++){
			scanf("%s",a[i]);
		}
		printf("%d\n",f(a));
	}
}
