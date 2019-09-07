#include <stdio.h>

char tree[70000005];
int stack[30],top,k;

void pre(int m){
	if(tree[m]!= 0){
			
		printf("%c",tree[m]);
		
	}
	if(tree[2*m+1]!= 0){
			
		pre(2*m+1);
	}
	if(tree[2*m+2]!= 0){
			
		pre(2*m+2);
	}
}
void ino(int m){
	if(tree[2*m+1]!= 0){
			
		ino(2*m+1);
	}
	if(tree[m]!= 0){
			
		printf("%c",tree[m]);
		
	}
	if(tree[2*m+2]!= 0){
			
		ino(2*m+2);
	}
}
void post(int m){
	if(tree[2*m+1]!= 0){
			
		post(2*m+1);
	}
	if(tree[2*m+2]!= 0){
			
		post(2*m+2);
	}
	if(tree[m]!= 0){
			
		printf("%c",tree[m]);
		
	}
}
int main(){
	
	int n,i,j;
	char in[10]={0};
	
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++){
		if(i==0){
				
			scanf("%s",&tree[0]);
			scanf("%s",&in[0]);
			if(in[0]!='.'){
					
				tree[1]=in[0];
			}
			scanf("%s",&in[0]);
			if(in[0]!='.'){
					
				tree[2]=in[0];
			}
		}
		else{
				
			scanf("%s",&in[0]);
			for(j=0;j<70000005;j++){
					
				if(tree[j]==in[0]){
						
					k=j;
					break;
				}
			}
			scanf("%s",&in[0]);
			if(in[0]!='.'){
					
				tree[k*2+1]=in[0];
			}
			scanf("%s",&in[0]);
			if(in[0]!='.'){
					
				tree[k*2+2]=in[0];
			}
		}
	}
	pre(0);
	printf("\n");
	ino(0);
	printf("\n");
	post(0);
}                          
