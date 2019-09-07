#include <stdio.h>
int main(){
	int k;
	scanf("%d",&k);
	int a[12]={0};
	int b[12]={0};
	int i;
	int up=0,down=0,left=0,right=0;
	int q,w;
	for(i=0;i<6;i++){
		scanf("%d%d",&a[i],&b[i]);
		if(a[i]==1){
			right++;
		}
		else if(a[i]==4){
			up++;
		}
		else if(a[i]==2){
			left++;
		}
		else{
			down++;
		}
		a[i+6]=a[i];
		b[i+6]=b[i];
	}
	int sum=0;
	if(right+up==2){
		for(i=0;i<6;i++){
			if(a[i]==1){
				q=b[i];
			}
			if(a[i]==4){
				w=b[i];
			}
		}
		sum+=q*w;
		for(i=0;i<11;i++){
			if(a[i]==3 && a[i+1]==2){
				sum-=b[i]*b[i+1];
				break;
			}
		}
	}
	else if(down+right==2){
		for(i=0;i<6;i++){
			if(a[i]==3){
				q=b[i];
			}
			if(a[i]==1){
				w=b[i];
			}
		}
		sum+=q*w;
		for(i=0;i<11;i++){
			if(a[i]==2 && a[i+1]==4){
				sum-=b[i]*b[i+1];
				break;
			}
		}
	}
	else if(left+up==2){
		for(i=0;i<6;i++){
			if(a[i]==2){
				q=b[i];
			}
			if(a[i]==4){
				w=b[i];
			}
		}
		sum+=q*w;
		for(i=0;i<11;i++){
			if(a[i]==1 && a[i+1]==3){
				sum-=b[i]*b[i+1];
				break;
			}
		}
	}
	else{
		for(i=0;i<6;i++){
			if(a[i]==2){
				q=b[i];
			}
			if(a[i]==3){
				w=b[i];
			}
		}
		sum+=q*w;
		for(i=0;i<11;i++){
			if(a[i]==4 && a[i+1]==1){
				sum-=b[i]*b[i+1];
				break;
			}
		}
	}
	printf("%d",k*sum);
}
