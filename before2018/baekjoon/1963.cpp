#include <stdio.h>

int a,b,i,tail,head;
int q[1300];
int abra[10000];
int abra2[10000];

void bfs(int z){
	if(b==z){
		
		printf("%d\n",abra2[z]);
		return;
	}
	else if(head==tail){
		
		printf("Impossible\n");
		return;
	}
	else{
		for(i=1;i<10-z%10;i++){
			if(abra[z+i]==0 && abra2[z+i]==0){
				
				q[tail++]=z+i;
				abra2[z+i]=abra2[z]+1;
			}
		}
		for(i=1;i<z%10+1;i++){
			
			if(abra[z-i]==0 && abra2[z-i]==0){
				
				q[tail++]=z-i;
				abra2[z-i]=abra2[z]+1;
			}
		}
		for(i=1;i<10-(z/10)%10;i++){
			
			if(abra[z+i*10]==0 && abra2[z+i*10]==0){
				
				q[tail++]=z+i*10;
				abra2[z+i*10]=abra2[z]+1;
			}
		}
		for(i=1;i<(z/10)%10+1;i++){
			
			if(abra[z-i*10]==0 && abra2[z-i*10]==0){
				q[tail++]=z-i*10;
				abra2[z-i*10]=abra2[z]+1;
			}
		}
		for(i=1;i<10-(z/100)%10;i++){
			if(abra[z+i*100]==0 && abra2[z+i*100]==0){
				q[tail++]=z+i*100;
				abra2[z+i*100]=abra2[z]+1;
			}
		}
		for(i=1;i<(z/100)%10+1;i++){
			
			if(abra[z-i*100]==0 && abra2[z-i*100]==0){
				
				q[tail++]=z-i*100;
				abra2[z-i*100]=abra2[z]+1;
			}
		}
		for(i=1;i<10-(z/1000)%10;i++){
			
			if(abra[z+i*1000]==0 && abra2[z+i*1000]==0){
				
				q[tail++]=z+i*1000;
				abra2[z+i*1000]=abra2[z]+1;
			}
		}
		for(i=1;i<(z/1000)%10;i++){
			
			if(abra[z-i*1000]==0 && abra2[z-i*1000]==0){
				
				q[tail++]=z-i*1000;
				abra2[z-i*1000]=abra2[z]+1;
			}
		}
		q[head++]=0;
		bfs(q[head]);
	}
}
int main(){
	
	int t,j;
	
	scanf("%d",&t);
	
	for(i=2;i<10000;i++){
		
		if(abra[i]!=-1){
		
	 		for(j=i*i;j<10000;j+=i){
				abra[j]=-1;
			}
		}
	}
	while(t--){
		
		scanf("%d%d",&a,&b);
		q[tail++]=a;
		bfs(a);
		for(i=1000;i<10000;i++){
			
			abra2[i]=0;
		}
		tail=0;
		head=0;
	}
}
