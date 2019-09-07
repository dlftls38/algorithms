#include <stdio.h>

int before[105][105],mem[11000],n,top,count=0,after[105][105];

void push(int a){
	
	mem[top++] = a;
}

void pop(){
	
	mem[--top] = 0;
}
void fill(int a,int b,int c,int d){
	int z,x;
	for(z=0;z<n;z++){
		printf("a= %d ** b= %d",a,b);
		if(before[b][z]==1){
			if(b==c && z==d && count>0){
				break;
			}
			fill(b,z,c,d);
			push(z);
			count++;
			for(x=0;x<count;x++){
				
				after[a][mem[x]]=1;
			}
		}
	}
}
int main(){
	
	int i,j;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		for(j=0;j<n;j++){
			
			scanf("%d",&before[i][j]);
		}
	}
	for(i=0;i<n;i++){
		
		for(j=0;j<n;j++){
			
			if(before[i][j]==1){
				fill(i,j,i,j);
				after[i][j]=1;
				for(j=0;j<top;j++){
				
					pop();
				}
				count=0;
			}
		}
	}
	for(i=0;i<n;i++){
		
		for(j=0;j<n;j++){
			
			printf("%d ",after[i][j]);
		}
		printf("\n");
	}
}
