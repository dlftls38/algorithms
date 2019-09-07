#include <stdio.h>
int a[100020],p=1;

void change(int b){
	int c;
	if(b<3){
	}
	else{
		if(a[b-1]<a[(b-1)/2]){
			b--;
			c = a[b];
			a[b]=a[b/2];
			a[b/2]=c;
			b++;
			change((b-1)/2 +1);
		}
		else{
		}
	}
}
void del(int m){
	int c;
	if(2*m+1<p && 2*m<p && a[2*m]<a[m] && a[2*m+1]<a[m] && a[2*m+1]<a[2*m]){
		
		c = a[m];
		a[m] = a[2*m+1];
		a[2*m+1] = c;
		del(2*m+1);
	}
	else if(2*m+1<p && 2*m<p && a[2*m]<a[m] && a[2*m+1]<a[m] && a[2*m+1]>a[2*m]){
		
		c = a[m];
		a[m] = a[2*m];
		a[2*m] = c;
		del(2*m);
	}
	else if(2*m<p && a[2*m]<a[m]){
		
		c = a[m];
		a[m] = a[2*m];
		a[2*m] = c;
		del(2*m);
	}
	else if(2*m+1<p && a[2*m+1]<a[m]){
		
		c = a[m];
		a[m] = a[2*m+1];
		a[2*m+1] = c;
		del(2*m+1);
	}
	
}
int main(){
	
	int n,i,j,k;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&k);
		if(k>0){
			a[p++] = k;
			change(p);
		}
		else{
			
			printf("%d\n",a[1]);
			if(a[1]!=0){
				a[1]=0;
				a[1]=a[--p];
				del(1);
				del(1);
			}
		}
	}
}
