#include <stdio.h>
int a[200020],p=1;
int zer(int o){
	
	if(o<0){
		
		return -o;
	}
	else{
		
		return o;
	}
}
void change(int b){
	int c;
	if(b<3){
	}
	else{
		if(zer(a[b-1])<zer(a[(b-1)/2])){
			b--;
			c = a[b];
			a[b]=a[b/2];
			a[b/2]=c;
			b++;
			change((b-1)/2 +1);
		}
		else if(zer(a[b-1])==zer(a[(b-1)/2]) && a[b-1]<a[(b-1)/2]){
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
	if(2*m+1<p && 2*m<p && zer(a[2*m])<zer(a[m]) && zer(a[2*m+1])<zer(a[m]) && zer(a[2*m+1])<zer(a[2*m])){
		
		c = a[m];
		a[m] = a[2*m+1];
		a[2*m+1] = c;
		del(2*m+1);
	}
	else if(2*m+1<p && 2*m<p && zer(a[2*m])<zer(a[m]) && zer(a[2*m+1])<zer(a[m]) && zer(a[2*m+1])>zer(a[2*m])){
		
		c = a[m];
		a[m] = a[2*m];
		a[2*m] = c;
		del(2*m);
	}
	else if(2*m+1<p && zer(a[2*m+1])==zer(a[m]) && a[2*m+1]<a[m] && zer(a[2*m+1])<=zer(a[2*m])){
		
		c = a[m];
		a[m] = a[2*m+1];
		a[2*m+1] = c;
		del(2*m+1);
	}	
	else if(2*m<p && zer(a[2*m])==zer(a[m]) && a[2*m]<a[m] && zer(a[2*m+1])>=zer(a[2*m])){
		
		c = a[m];
		a[m] = a[2*m];
		a[2*m] = c;
		del(2*m);
	}
	else if(2*m<p && zer(a[2*m])<zer(a[m])){
		
		c = a[m];
		a[m] = a[2*m];
		a[2*m] = c;
		del(2*m);
	}
	else if(2*m+1<p && zer(a[2*m+1])<zer(a[m])){
		
		c = a[m];
		a[m] = a[2*m+1];
		a[2*m+1] = c;
		del(2*m+1);
	}
	else if(2*m+1<p && zer(a[2*m+1])==zer(a[m]) && a[2*m+1]<a[m]){
		
		c = a[m];
		a[m] = a[2*m+1];
		a[2*m+1] = c;
		del(2*m+1);
	}	
	else if(2*m<p && zer(a[2*m])==zer(a[m]) && a[2*m]<a[m]){
		
		c = a[m];
		a[m] = a[2*m];
		a[2*m] = c;
		del(2*m);
	}	
	
}
int main(){
	
	int n,i,j,k;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&k);
		if(k!=0){
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
				del(1);
				del(1);
			}
		}
	}
}
