#include <stdio.h>
int r,y,i,j,a[60][60],b[60][60],c[60][60],q[5000000],q2[5000000],head,tail,head2,tail2,qq[5000000],qq2[5000000],max,z,zz,count;
char k[2];
void bfs(int o,int oo){
	if(a[o][oo+1]==0){
		a[o][oo+1]=2,q[tail]=o,q2[tail++]=oo+1;
		if(b[o][oo+1]==0 || b[o][oo+1]>b[o][oo]+1){
			b[o][oo+1]=b[o][oo]+1;
		}
	}
	if(a[o][oo-1]==0){
		a[o][oo-1]=2,q[tail]=o,q2[tail++]=oo-1;
		if(b[o][oo-1]==0 || b[o][oo-1]>b[o][oo]+1){
			b[o][oo-1]=b[o][oo]+1;
		}
	}
	if(a[o+1][oo]==0){
		a[o+1][oo]=2,q[tail]=o+1,q2[tail++]=oo;
		if(b[o+1][oo]==0 || b[o+1][oo]>b[o][oo]+1){
			b[o+1][oo]=b[o][oo]+1;
		}
	}
	if(a[o-1][oo]==0){
		a[o-1][oo]=2,q[tail]=o-1,q2[tail++]=oo;
		if(b[o-1][oo]==0 || b[o-1][oo]>b[o][oo]+1){
			b[o-1][oo]=b[o][oo]+1;
		}
	}
	head++;
	if(tail!=head) bfs(q[head],q2[head]);
}
void bfs2(int o,int oo){
	if(a[o][oo+1]==0 || a[o][oo+1]==2){
		a[o][oo+1]=1,qq[tail2]=o,qq2[tail2++]=oo+1;
		if(c[o][oo+1]==0 || c[o][oo+1]>c[o][oo]+1){
			c[o][oo+1]=c[o][oo]+1;
		}
	}
	if(a[o][oo-1]==0 || a[o][oo-1]==2){
		a[o][oo-1]=1,qq[tail2]=o,qq2[tail2++]=oo-1;
		if(c[o][oo-1]==0 || c[o][oo-1]>c[o][oo]+1){
			c[o][oo-1]=c[o][oo]+1;
		}
	}
	if(a[o+1][oo]==0 || a[o+1][oo]==2){
		a[o+1][oo]=1,qq[tail2]=o+1,qq2[tail2++]=oo;
		if(c[o+1][oo]==0 || c[o+1][oo]>c[o][oo]+1){
			c[o+1][oo]=c[o][oo]+1;
		}
	}
	if(a[o-1][oo]==0 || a[o-1][oo]==2){
		a[o-1][oo]=1,qq[tail2]=o-1,qq2[tail2++]=oo;
		if(c[o-1][oo]==0 || c[o-1][oo]>c[o][oo]+1){
			c[o-1][oo]=c[o][oo]+1;
		}
	}
	head2++;
	if(tail2!=head2) bfs2(qq[head2],qq2[head2]);
}
int main(){
	scanf("%d%d",&r,&y);
	for(i=0;i<59;i++) for(j=0;j<59;j++) a[i][j]=-1;
	for(i=3;i<r+3;i++){
		for(j=3;j<y+3;j++){
			scanf("%s",k);
			if(k[0]=='D') a[i][j]=3,z=i,zz=j,count++;
			else if(k[0]=='S') a[i][j]=2,q[tail]=i,q2[tail++]=j,count++;
			else if(k[0]=='X') a[i][j]=-1;
			else if(k[0]=='.') a[i][j]=0;
			else if(k[0]=='*') a[i][j]=1,qq[tail2]=i,qq2[tail2++]=j;
		}
	}
	if(count<2) printf("KAKTUS");
	else if(q[0]==z+1 && q2[0]==zz) printf("1");
	else if(q[0]==z-1 && q2[0]==zz) printf("1");
	else if(q[0]==z && q2[0]==zz+1) printf("1");
	else if(q[0]==z && q2[0]==zz-1) printf("1");
	else if(a[z+1][zz]+a[z-1][zz]+a[z][zz+1]+a[z][zz-1]==-4) printf("KAKTUS");
	else{
		bfs(q[0],q2[0]);
		if(tail2>0) bfs2(qq[0],qq2[0]);
		if((c[z+1][zz]==0 || b[z+1][zz]<c[z+1][zz]) && max<b[z+1][zz]) max= b[z+1][zz];
		if((c[z-1][zz]==0 || b[z-1][zz]<c[z-1][zz]) && max<b[z-1][zz]) max= b[z-1][zz];
		if((c[z][zz+1]==0 || b[z][zz+1]<c[z][zz+1]) && max<b[z][zz+1]) max= b[z][zz+1];
		if((c[z][zz-1]==0 || b[z][zz-1]<c[z][zz-1]) && max<b[z][zz-1]) max= b[z][zz-1];
		if(max>0) printf("%d",max+1);
		else printf("KAKTUS");	
	}
}
