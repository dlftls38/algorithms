#include <stdio.h>
int r,c,a[60][60],i,j,q[500000],q2[500000],q3[500000],q4[500000],head,tail,p,jw[500000],jw2[500000],top,z;
char k[2];
void bfs(int o,int oo,int ooo,int oooo){
	if(ooo==2){
		for(i=0;i<top;i++){
			if(o==jw[i] && oo==jw2[i]){
				z=1;
				break;
			}
		}
		if(z==1) z=0;
		else{
			if(a[o][oo+1]==0) a[o][oo+1]=2,q[tail]=o,q2[tail]=oo+1,q3[tail]=2,q4[tail++]=oooo+1;
			if(a[o][oo-1]==0) a[o][oo-1]=2,q[tail]=o,q2[tail]=oo-1,q3[tail]=2,q4[tail++]=oooo+1; 
			if(a[o+1][oo]==0) a[o+1][oo]=2,q[tail]=o+1,q2[tail]=oo,q3[tail]=2,q4[tail++]=oooo+1; 
			if(a[o-1][oo]==0) a[o-1][oo]=2,q[tail]=o-1,q2[tail]=oo,q3[tail]=2,q4[tail++]=oooo+1;
			if(a[o+1][oo]==3){
				p=oooo+1;
				return;
			}
			if(a[o-1][oo]==3){
				p=oooo+1;
				return;
			}
			if(a[o][oo+1]==3){
				p=oooo+1;
				return;
			}
			if(a[o][oo-1]==3){
				p=oooo+1;
				return;
			}
		}
	}
	else{
		if(a[o][oo+1]==0 || a[o][oo+1]==2){
			if(a[o][oo+1]==2) jw[top]=o,jw2[top++]=oo+1;
			a[o][oo+1]=1,q[tail]=o,q2[tail]=oo+1,q3[tail]=1,q4[tail++]=0;
		}
		if(a[o][oo-1]==0 || a[o][oo-1]==2){
			if(a[o][oo-1]==2) jw[top]=o,jw2[top++]=oo-1;
			a[o][oo-1]=1,q[tail]=o,q2[tail]=oo-1,q3[tail]=1,q4[tail++]=0;
		} 
		if(a[o+1][oo]==0 || a[o+1][oo]==2){
			if(a[o+1][oo]==2) jw[top]=o+1,jw2[top++]=oo;
			a[o+1][oo]=1,q[tail]=o+1,q2[tail]=oo,q3[tail]=1,q4[tail++]=0;	
		} 
		if(a[o-1][oo]==0 || a[o-1][oo]==2){
			if(a[o-1][oo]==2) jw[top]=o-1,jw2[top++]=oo;
			a[o-1][oo]=1,q[tail]=o-1,q2[tail]=oo,q3[tail]=1,q4[tail++]=0;
		}
	}
	head++;
	if(tail!=head) bfs(q[head],q2[head],q3[head],q4[head]);
}
int main(){
	scanf("%d%d",&r,&c);
	for(i=0;i<60;i++) for(j=0;j<60;j++) a[i][j]=-1;
	for(i=3;i<r+3;i++){
		for(j=3;j<c+3;j++){
			scanf("%s",k);
			if(k[0]=='D') a[i][j]=3;
			else if(k[0]=='S') a[i][j]=2,q[tail]=i,q2[tail]=j,q3[tail]=2,q4[tail++]=0;
			else if(k[0]=='X') a[i][j]=-1;
			else if(k[0]=='.') a[i][j]=0;
			else if(k[0]=='*') a[i][j]=1,q[tail]=i,q2[tail]=j,q3[tail]=1,q4[tail++]=0;
		}
	}
	if(tail==0) printf("KAKTUS");
	else{
		bfs(q[0],q2[0],q3[0],q4[0]);
		if(p>0) printf("%d",p);
		else printf("KAKTUS");	
	}
}
