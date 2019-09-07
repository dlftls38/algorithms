#include <stdio.h>
int count;
struct tree{
	
	int root,left,right;
} t[60];

void pre(int a){
	
	if(t[a].left<100){
		
		pre(t[a].left);
	}
	if(t[a].right<100){
		
		pre(t[a].right);
	}
	t[a].left=100;
	t[a].right=100;

}
void pre2(int a){
	if(t[a].left==100 && t[a].right==100){
		
		count++;
	}
	if(t[a].left<100){
		
		pre2(t[a].left);
	}
	if(t[a].right<100){
		
		pre2(t[a].right);
	}

}
int main(){
	
	int n,i,j,k,need;
	
	scanf("%d",&n);
	
	for(i=0;i<60;i++){
		
		t[i].root=100;
		t[i].left=100;
		t[i].right=100;
	}
	for(i=0;i<n;i++){
		
		scanf("%d",&k);
		t[i].root=k;
		if(k==-1){
			
			need=i;
		}
		if(k!=-1 && t[k].left==100){
			
			t[k].left=i;
		}
		else if(k!=-1 && t[k].left!=100){ 
			
			t[k].right=i;
		}
	}
	
	scanf("%d",&k);
	pre(k);
	if(t[t[k].root].left==k){
		t[t[k].root].left=100;
	}
	else{
		t[t[k].root].right=100;
	}
	pre2(need);
	if(t[k].root==-1){
		
		printf("0");
	}
	else{
		printf("%d",count);
	}
}
