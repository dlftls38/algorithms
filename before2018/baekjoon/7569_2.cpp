#include <stdio.h>

int first[111][111][111];
int stack[5000000],stack2[5000000],stack3[5000000];
int top,check[111][111][111];

int main(){
	
	int m,n,h;
	int i,j,z;
	int toicx=0,day=1,change=0,r;
	
	scanf("%d%d%d",&m,&n,&h);
	
	for(i=0;i<111;i++){
		
		for(j=0;j<111;j++){
			
			for(z=0;z<111;z++){
				
				first[i][j][z]=-1;
			}
		}
	}	
	for(i=1;i<h+1;i++){
		
		for(j=1;j<n+1;j++){
			
			for(z=1;z<m+1;z++){
				
				scanf("%d",&first[i][j][z]);
				if(first[i][j][z]==1){
					
					stack[top]=i;
					stack2[top]=j;
					stack3[top++]=z;
				}
				if(first[i][j][z]==0){
					
					toicx++;
				}
			}
		}
	}	
	while(1){
		r = top;
		for(i=top-1;i>-1;i--){
			
			if(first[stack[i]][stack2[i]][stack3[i]+1]==0 && check[stack[i]][stack2[i]][stack3[i]+1]==0){
				check[stack[i]][stack2[i]][stack3[i]+1]=1;
				first[stack[i]][stack2[i]][stack3[i]+1]=1;
				change++;
				stack[top]=stack[i];
				stack2[top]=stack2[i];
				stack3[top++]=stack3[i]+1;
				toicx--;
			}
			if(first[stack[i]-1][stack2[i]][stack3[i]]==0 && check[stack[i]-1][stack2[i]][stack3[i]]==0){
				check[stack[i]-1][stack2[i]][stack3[i]]=1;
				first[stack[i]-1][stack2[i]][stack3[i]]=1;
				change++;
				stack[top]=stack[i]-1;
				stack2[top]=stack2[i];
				stack3[top++]=stack3[i];
				toicx--;
			}
			if(first[stack[i]+1][stack2[i]][stack3[i]]==0 && check[stack[i]+1][stack2[i]][stack3[i]]==0){
				check[stack[i]+1][stack2[i]][stack3[i]]=1;
				first[stack[i]+1][stack2[i]][stack3[i]]=1;
				change++;
				stack[top]=stack[i]+1;
				stack2[top]=stack2[i];
				stack3[top++]=stack3[i];
				toicx--;
			}
			if(first[stack[i]][stack2[i]-1][stack3[i]]==0 && check[stack[i]][stack2[i]-1][stack3[i]]==0){
				check[stack[i]][stack2[i]-1][stack3[i]]=1;
				first[stack[i]][stack2[i]-1][stack3[i]]=1;
				change++;
				stack[top]=stack[i];
				stack2[top]=stack2[i]-1;
				stack3[top++]=stack3[i];
				toicx--;
			}
			if(first[stack[i]][stack2[i]+1][stack3[i]]==0 && check[stack[i]][stack2[i]+1][stack3[i]]==0){
				check[stack[i]][stack2[i]+1][stack3[i]]=1;
				first[stack[i]][stack2[i]+1][stack3[i]]=1;
				change++;
				stack[top]=stack[i];
				stack2[top]=stack2[i]+1;
				stack3[top++]=stack3[i];
				toicx--;
			}
			if(first[stack[i]][stack2[i]][stack3[i]-1]==0 && check[stack[i]][stack2[i]][stack3[i]-1]==0){
				check[stack[i]][stack2[i]][stack3[i]-1]=1;
				first[stack[i]][stack2[i]][stack3[i]-1]=1;
				change++;
				stack[top]=stack[i];
				stack2[top]=stack2[i];
				stack3[top++]=stack3[i]-1;
				toicx--;
			}
		}
		for(i=0;i<top-r;i++){
			
			stack[i]=stack[i+r];
			stack2[i]=stack2[i+r];
			stack3[i]=stack3[i+r];
		}
		for(i=top-r;i<top;i++){
			
			stack[i]=0;
			stack2[i]=0;
			stack3[i]=0;
		}
		top = top-r;
		if(day==1 && toicx==0){
			
			printf("0");
			break;
		}
		if(toicx>0 && change==0){
			
			printf("-1");
			break;
		}
		if(toicx==0){
			
			printf("%d",day);
			break;
		}

		day++;
		change=0;
	}
}
