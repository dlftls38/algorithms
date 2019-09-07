#include <stdio.h>
int a[100020],p=1,aa[100020],pp=1;
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
void change2(int b){
	int c;
	if(b<3){
	}
	else{
		if(aa[b-1]>aa[(b-1)/2]){
			b--;
			c = aa[b];
			aa[b]=aa[b/2];
			aa[b/2]=c;
			b++;
			change2((b-1)/2 +1);
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
void del2(int m){
	int c;
	if(2*m+1<pp && 2*m<pp && aa[2*m]>aa[m] && aa[2*m+1]>aa[m] && aa[2*m+1]>aa[2*m]){
		
		c = aa[m];
		aa[m] = aa[2*m+1];
		aa[2*m+1] = c;
		del2(2*m+1);
	}
	else if(2*m+1<pp && 2*m<pp && aa[2*m]>aa[m] && aa[2*m+1]>aa[m] && aa[2*m+1]<aa[2*m]){
		
		c = aa[m];
		aa[m] = aa[2*m];
		aa[2*m] = c;
		del2(2*m);
	}
	else if(2*m<pp && aa[2*m]>aa[m]){
		
		c = aa[m];
		aa[m] = aa[2*m];
		aa[2*m] = c;
		del2(2*m);
	}
	else if(2*m+1<pp && aa[2*m+1]>aa[m]){
		
		c = aa[m];
		aa[m] = aa[2*m+1];
		aa[2*m+1] = c;
		del2(2*m+1);
	}
	
}
int main(){
	
	int n,i,k;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&k);
		if(k>0){
			a[p++] = k;
			change(p);
		}
		else if(k<0){
			
			aa[pp++] = k;
			change2(pp);			
		}
		else{
			
			if(zer(a[1])<zer(aa[1]) && a[1]!=0){
				
				printf("%d\n",a[1]);
				a[1]=0;
				a[1]=a[--p];
				del(1);
				del(1);
			}
			else if(zer(a[1])>zer(aa[1]) && aa[1]!=0){
				
				printf("%d\n",aa[1]);
				aa[1]=0;
				aa[1]=aa[--pp];
				del2(1);
				del2(1);
			}
			else if(zer(a[1])==zer(aa[1])){
				
				printf("%d\n",aa[1]);
				if(aa[1]!=0){
					aa[1]=0;
					aa[1]=aa[--pp];
					del2(1);
					del2(1);
				}
			}
			else if(zer(aa[1])==0 && zer(a[1])>0){
				
				printf("%d\n",a[1]);
				a[1]=0;
				a[1]=a[--p];
				del(1);
				del(1);
			}
			else if(zer(a[1])==0 && zer(aa[1])>0){
				
				printf("%d\n",aa[1]);
				aa[1]=0;
				aa[1]=aa[--pp];
				del2(1);
				del2(1);
			}
		}
	}
}
