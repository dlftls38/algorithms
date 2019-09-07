#include <stdio.h>
int main(){
	int n,p,q;
	scanf("%d%d%d",&n,&p,&q); 
	int odd;
	if(p<=q){
		odd=0;
	}
	else{
		odd=1;
	}
	int i,j;
	int e[1001]={0};
	for(i=0;i<n;i++){
		scanf("%d",&e[i]);
	}
	for(i=0;i<n;i++){
		int x=e[i];
		char a[1000]={0};
		int top=0;
		int count=0;
		int k;
		if(x%2==1){
			if(odd==0){
				while(x>=p){
					k=x%p;
					x/=p;
					if(k>=10){
						a[top++]=k+'A'-10;
					}
					else{
						a[top++]=k+'0';
					}
				}
				if(x>0){
					if(x>=10){
						a[top++]=x+'A'-10;
					}
					else{
						a[top++]=x+'0';
					}
				}
			}
			else{
				while(x>=q){
					k=x%q;
					x/=q;
					if(k>=10){
						a[top++]=k+'A'-10;
					}
					else{
						a[top++]=k+'0';
					}
				}
				if(x>0){
					if(x>=10){
						a[top++]=x+'A'-10;
					}
					else{
						a[top++]=x+'0';
					}
				}
			}
		}
		else{
			if(odd==0){
				while(x>=q){
					k=x%q;
					x/=q;
					if(k>=10){
						a[top++]=k+'A'-10;
					}
					else{
						a[top++]=k+'0';
					}
				}
				if(x>0){
					if(x>=10){
						a[top++]=x+'A'-10;
					}
					else{
						a[top++]=x+'0';
					}
				}	
			}
			else{
				while(x>=p){
					k=x%p;
					x/=p;
					if(k>=10){
						a[top++]=k+'A'-10;
					}
					else{
						a[top++]=k+'0';
					}
				}
				if(x>0){
					if(x>=10){
						a[top++]=x+'A'-10;
					}
					else{
						a[top++]=x+'0';
					}
				}
			}
		}
		for(j=0;j<top;j++){
			if(a[j]=='3' || a[j]=='6' || a[j]=='9' || a[j]=='C' || a[j]=='L' || a[j]=='A' || a[j]=='P'){
				count++;
			}
		}
		if(count>0){
			for(j=0;j<count;j++){
				printf("CLAP");
			}
			printf("\n");
		}
		else{
			for(j=top-1;j>-1;j--){
				printf("%c",a[j]);
			}
			printf("\n");
		}
	}
}
