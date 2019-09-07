#include<stdio.h>
int check[250000];
int main(){
	int a;
	int p;
	scanf("%d%d",&a,&p);
	int count=1;
	int i;
	check[a]=1;
	while(1){
		int k=0;
		count++;
		while(a>0){
			int x=1;
			for(i=0;i<p;i++){
				x*=a%10;
			}
			k+=x;
			a/=10;
		}
		a=k;
		if(check[k]==0){
			check[k]=count;
		}
		else{
			break;
		}
	}
	printf("%d",check[a]-1);
}
