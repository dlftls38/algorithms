#include <stdio.h>
int flag=0;
int n;
void recursive(char a[60],int position,int count_A,int k){
	printf("%s\n",a);
	if(flag==1){
		return;
	}
	if(k==0){
		flag=1;
		printf("%s",a);
		return;
	}
	if(position>=n){
		return;
		
	}
	if(k-count_A>=0){
		a[position++]='B';
		recursive(a,position,count_A,k-count_A);
		a[--position]='A';
		recursive(a,position+1,count_A+1,k);
	}
}
int main(){
	int k;
	scanf("%d %d",&n,&k);
	char a[60]={0};
	for(int i=0;i<n;i++){
		a[i]='A';
	}
	if(k==0){
		printf("B");
		for(int i=0;i<n-1;i++){
			printf("A");
		}
	}
	else{
		recursive(a,0,0,k);
		if(flag==0){
			printf("-1");
		}	
	}
}
