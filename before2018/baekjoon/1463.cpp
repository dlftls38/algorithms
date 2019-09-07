#include <stdio.h>
int a[1010000];
void gogo(int z){
	
	if(z%3==0){
		if(a[z/3]==0){
			
			a[z/3]=a[z]+1;
			gogo(z/3);
		}
		else if(a[z/3]!=0 && a[z/3]>a[z]+1){
			
			a[z/3]=a[z]+1;
			gogo(z/3);	
		}
	}
	if(z%2==0){
		if(a[z/2]==0){
			
			a[z/2]=a[z]+1;
			gogo(z/2);
		}
		else if(a[z/2]!=0 && a[z/2]>a[z]+1){
			
			a[z/2]=a[z]+1;
			gogo(z/2);	
		}
	}
	if(z>1){
		if(a[z-1]==0){
			
			a[z-1]=a[z]+1;
			gogo(z-1);
		}
		else if(a[z-1]!=0 && a[z-1]>a[z]+1){
			
			a[z-1]=a[z]+1;
			gogo(z-1);	
		}
	}
}
int main(){
	
	int n;
	
	scanf("%d",&n);
	gogo(n);
	printf("%d",a[1]);
}
