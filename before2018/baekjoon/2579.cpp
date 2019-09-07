#include <stdio.h>
int max=0,n,a[310];
void gogo(int accumulate,int count,int position){
	if(position>=n){
		if(position==n && max<accumulate) max=accumulate;
		return;
	}
	if(count<2) gogo(accumulate+a[position+1],count+1,position+1);
	gogo(accumulate+a[position+2],1,position+2);
}
int main(){
	int i;
	scanf("%d",&n);
	for(i=1;i<n+1;i++){
		scanf("%d",&a[i]);
	}
	gogo(0,0,0);
	printf("%d",max);
}
