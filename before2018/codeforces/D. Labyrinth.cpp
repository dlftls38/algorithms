#include <stdio.h>
int a[2001][2001];
int n,m;
int p1[5000000];//y
int p2[5000000];//x
int p3[5000000];//l
int p4[5000000];//r
int tail;
int head;
int answer;
void bfs(int d){
	int k=0;
	while(1){
		k++;
		if(p1[head]+k<n && a[p1[head]+k][p2[head]+d]==0){
			a[p1[head]+k][p2[head]+d]=1;
			p1[tail]=p1[head]+k;
			p2[tail]=p2[head]+d;
			answer++;
			if(d==1){
				p3[tail]=p3[head];
				p4[tail++]=p4[head]-1;
			}
			else if(d==-1){
				p3[tail]=p3[head]-1;
				p4[tail++]=p4[head];
			}
			else{
				p3[tail]=p3[head];
				p4[tail++]=p4[head];
			}
		}
		else{
			break;
		}
	}
	k=0;
	while(1){
		k++;
		if(p1[head]-k>=0 && a[p1[head]-k][p2[head]+d]==0){
			a[p1[head]-k][p2[head]+d]=1;
			p1[tail]=p1[head]-k;
			p2[tail]=p2[head]+d;
			answer++;
			if(d==1){
				p3[tail]=p3[head];
				p4[tail++]=p4[head]-1;
			}
			else if(d==-1){
				p3[tail]=p3[head]-1;
				p4[tail++]=p4[head];
			}
			else{
				p3[tail]=p3[head];
				p4[tail++]=p4[head];
			}
		}
		else{
			break;
		}
	}
}
int main(){
	int r,c,x,y;
	scanf("%d%d",&n,&m);
	scanf("%d%d",&r,&c);
	scanf("%d%d",&x,&y);
	for(int i=0;i<n;i++){
		char h[2001]={0};
		scanf("%s",h);
		for(int j=0;j<m;j++){
			if(h[j]=='*'){
				a[i][j]=1;
			}
		}
	}
	p1[tail]=r-1;
	p2[tail]=c-1;
	p3[tail]=x;
	p4[tail++]=y;
	answer++;
	a[r-1][c-1]=1;
	bfs(0);
	while(head<tail){
		//printf("%d %d %d %d\n",p1[head],p2[head],p3[head],p4[head]);
		if(p2[head]<m-1 && p4[head]>0 && a[p1[head]][p2[head]+1]==0){
			a[p1[head]][p2[head]+1]=1;
			answer++;
			p1[tail]=p1[head];
			p2[tail]=p2[head]+1;
			p3[tail]=p3[head];
			p4[tail++]=p4[head]-1;
			bfs(1);
		}
		if(p2[head]>0 && p3[head]>0 && a[p1[head]][p2[head]-1]==0){
			a[p1[head]][p2[head]-1]=1;
			answer++;
			p1[tail]=p1[head];
			p2[tail]=p2[head]-1;
			p3[tail]=p3[head]-1;
			p4[tail++]=p4[head];
			bfs(-1);
		}
		head++;
	}
	printf("%d",answer);
}
