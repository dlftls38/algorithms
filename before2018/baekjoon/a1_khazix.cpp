#include <stdio.h>
int n;
char a[20000]={0};
int max;
void recur(int now,int count,int k){
	for(int i=now;i<n+1;i++){
		if(k==0){
			if(a[i]=='k'){
				recur(i+1,count,k);
				k++;
			}
		}
		else if(k==1){
			if(a[i]=='h'){
				recur(i+1,count,k);
				k++;
			}
		}
		else if(k==2){
			if(a[i]=='a'){
				recur(i+1,count,k);
				k++;
			}
		}
		else if(k==3){
			if(a[i]=='z'){
				recur(i+1,count,k);
				k++;
			}
		}
		else if(k==4){
			if(a[i]=='i'){
				recur(i+1,count,k);
				k++;
			}
		}
		else if(k==5){
			if(a[i]=='x'){
				recur(i+1,count,k);
				k=0;
				count++;
				if(max<count){
					max=count;
				}
			}
		}
	}
}
int main(){
	scanf("%d",&n);
	scanf("%s",a);
	recur(0,0,0);
	printf("%d",max);
}
