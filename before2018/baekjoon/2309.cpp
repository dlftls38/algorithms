#include <stdio.h>
#include <algorithm>
int a[9],b[7];
void gogo(int z[7],int count,int fill){
	int i,s=0;
	if(count==7){
		for(i=0;i<7;i++) s+=z[i];
		if(s==100){
			for(i=0;i<7;i++) b[i]=z[i];
			return;
		}
	}
	for(i=fill;i<9;i++){
		z[count]=a[i];
		gogo(z,count+1,i+1);
	}
}
int main(){
	int i,c[7];
	for(i=0;i<9;i++) scanf("%d",&a[i]);
	gogo(c,0,0);
	std::sort(b,b+7);
	for(i=0;i<7;i++) printf("%d\n",b[i]);
}
