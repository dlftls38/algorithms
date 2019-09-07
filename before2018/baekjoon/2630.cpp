#include <stdio.h>
int n;
int blue,white;
int a[129][129];
void dc(int f_y,int e_y,int f_x,int e_x){
	int i,j,count=0;
	for(i=f_y;i<e_y+1;i++){
		for(j=f_x;j<e_x+1;j++){
			if(a[i][j]==1) count++;
		}
	}
	if(count==(e_y-f_y+1)*(e_x-f_x+1)){
		blue++;
	}
	else if(count==0){
		white++;
	}
	else{
		dc(f_y,e_y-(e_y-f_y+1)/2,f_x,e_x-(e_x-f_x+1)/2);
		dc(e_y-(e_y-f_y+1)/2+1,e_y,e_x-(e_x-f_x+1)/2+1,e_x);
		dc(e_y-(e_y-f_y+1)/2+1,e_y,f_x,e_x-(e_x-f_x+1)/2);
		dc(f_y,e_y-(e_y-f_y+1)/2,e_x-(e_x-f_x+1)/2+1,e_x);
	}
}
int main(){
	int i,j;
	scanf("%d",&n);
	for(i=1;i<n+1;i++) for(j=1;j<n+1;j++) scanf("%d",&a[i][j]);
	dc(1,n,1,n);
	printf("%d\n%d",white,blue);
}
