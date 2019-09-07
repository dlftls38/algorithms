#include <stdio.h>
int main(){
	int x,y;
	int n;
	scanf("%d%d",&x,&y);
	scanf("%d",&n);
	int i,j;
	int a[100]={0};
	int b[100]={0};
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
		if(a[i]==1){
			a[i]=b[i];
			b[i]=y;
		}
		else if(a[i]==2){
			a[i]=b[i];
			b[i]=0;
		}
		else if(a[i]==3){
			b[i]=y-b[i];
			a[i]=0;
		}
		else{
			a[i]=x;
			b[i]=y-b[i];
		}
	}
	int q,w;
	scanf("%d%d",&q,&w);
	if(q==1){
		q=w;
		w=y;
	}
	else if(q==2){
		q=w;
		w=0;
	}
	else if(q==3){
		w=y-w;
		q=0;
	}
	else{
		q=x;
		w=y-w;
	}
	int sum=0;
	for(i=0;i<n;i++){
		if(q==a[i] && w==b[i]){
			continue;
		}
		int r=q,t=w;
		int count1=0;
		int count2=0;
		int flag=0;
		if(q==0){
			for(j=0;j<y-w;j++){
				t++;
				count1++;
				if(r==a[i] && t==b[i]){
					flag=1;
					break;
				}
			}
			if(flag==0){
				for(j=0;j<x;j++){
					r++;
					count1++;
					if(r==a[i] && t==b[i]){
						flag=1;
						break;
					}
				}
			}
			if(flag==0){
				for(j=0;j<y;j++){
					t--;
					count1++;
					if(r==a[i] && t==b[i]){
						flag=1;
						break;
					}
				}
			}
			if(flag==0){
				for(j=0;j<x;j++){
					r--;
					count1++;
					if(r==a[i] && t==b[i]){
						flag=1;
						break;
					}
				}
			}
			if(flag==0){
				for(j=0;j<y;j++){
					t++;
					count1++;
					if(r==a[i] && t==b[i]){
						flag=1;
						break;
					}
				}
			}
			flag=0;
			r=q,t=w;
			for(j=0;j<w;j++){
				t--;
				count2++;
				if(r==a[i] && t==b[i]){
					flag=1;
					break;
				}
			}
			if(flag==0){
				for(j=0;j<x;j++){
					r++;
					count2++;
					if(r==a[i] && t==b[i]){
						flag=1;
						break;
					}
				}
			}
			if(flag==0){
				for(j=0;j<y;j++){
					t++;
					count2++;
					if(r==a[i] && t==b[i]){
						flag=1;
						break;
					}
				}
			}
			if(flag==0){
				for(j=0;j<x;j++){
					r--;
					count2++;
					if(r==a[i] && t==b[i]){
						flag=1;
						break;
					}
				}
			}
			if(flag==0){
				for(j=0;j<y;j++){
					t--;
					count2++;
					if(r==a[i] && t==b[i]){
						flag=1;
						break;
					}
				}
			}
			if(count1>count2){
				sum+=count2;
			}
			else{
				sum+=count1;
			}
		}
		else if(q==x){
			for(j=0;j<y-w;j++){
				t++;
				count1++;
				if(r==a[i] && t==b[i]){
					flag=1;
					break;
				}
			}
			if(flag==0){
				for(j=0;j<x;j++){
					r--;
					count1++;
					if(r==a[i] && t==b[i]){
						flag=1;
						break;
					}
				}
			}
			if(flag==0){
				for(j=0;j<y;j++){
					t--;
					count1++;
					if(r==a[i] && t==b[i]){
						flag=1;
						break;
					}
				}
			}
			if(flag==0){
				for(j=0;j<x;j++){
					r++;
					count1++;
					if(r==a[i] && t==b[i]){
						flag=1;
						break;
					}
				}
			}
			if(flag==0){
				for(j=0;j<y;j++){
					t++;
					count1++;
					if(r==a[i] && t==b[i]){
						flag=1;
						break;
					}
				}
			}
			flag=0;
			r=q,t=w;
			for(j=0;j<w;j++){
				t--;
				count2++;
				if(r==a[i] && t==b[i]){
					flag=1;
					break;
				}
			}
			if(flag==0){
				for(j=0;j<x;j++){
					r--;
					count2++;
					if(r==a[i] && t==b[i]){
						flag=1;
						break;
					}
				}
			}
			if(flag==0){
				for(j=0;j<y;j++){
					t++;
					count2++;
					if(r==a[i] && t==b[i]){
						flag=1;
						break;
					}
				}
			}
			if(flag==0){
				for(j=0;j<x;j++){
					r++;
					count2++;
					if(r==a[i] && t==b[i]){
						flag=1;
						break;
					}
				}
			}
			if(flag==0){
				for(j=0;j<y;j++){
					t--;
					count2++;
					if(r==a[i] && t==b[i]){
						flag=1;
						break;
					}
				}
			}
			if(count1>count2){
				sum+=count2;
			}
			else{
				sum+=count1;
			}
		}
		else if(w==0){
			for(j=0;j<q;j++){
				r--;
				count1++;
				if(r==a[i] && t==b[i]){
					flag=1;
					break;
				}
			}
			if(flag==0){
				for(j=0;j<y;j++){
					t++;
					count1++;
					if(r==a[i] && t==b[i]){
						flag=1;
						break;
					}
				}
			}
			if(flag==0){
				for(j=0;j<x;j++){
					r++;
					count1++;
					if(r==a[i] && t==b[i]){
						flag=1;
						break;
					}
				}
			}
			if(flag==0){
				for(j=0;j<y;j++){
					t--;
					count1++;
					if(r==a[i] && t==b[i]){
						flag=1;
						break;
					}
				}
			}
			if(flag==0){
				for(j=0;j<x;j++){
					r--;
					count1++;
					if(r==a[i] && t==b[i]){
						flag=1;
						break;
					}
				}
			}
			flag=0;
			r=q,t=w;
			for(j=0;j<x-w;j++){
				r++;
				count2++;
				if(r==a[i] && t==b[i]){
					flag=1;
					break;
				}
			}
			if(flag==0){
				for(j=0;j<y;j++){
					t++;
					count2++;
					if(r==a[i] && t==b[i]){
						flag=1;
						break;
					}
				}
			}
			if(flag==0){
				for(j=0;j<x;j++){
					r--;
					count2++;
					if(r==a[i] && t==b[i]){
						flag=1;
						break;
					}
				}
			}
			if(flag==0){
				for(j=0;j<y;j++){
					t--;
					count2++;
					if(r==a[i] && t==b[i]){
						flag=1;
						break;
					}
				}
			}
			if(flag==0){
				for(j=0;j<x;j++){
					r++;
					count2++;
					if(r==a[i] && t==b[i]){
						flag=1;
						break;
					}
				}
			}
			if(count1>count2){
				sum+=count2;
			}
			else{
				sum+=count1;
			}
		}
		else{
			for(j=0;j<q;j++){
				r--;
				count1++;
				if(r==a[i] && t==b[i]){
					flag=1;
					break;
				}
			}
			if(flag==0){
				for(j=0;j<y;j++){
					t--;
					count1++;
					if(r==a[i] && t==b[i]){
						flag=1;
						break;
					}
				}
			}
			if(flag==0){
				for(j=0;j<x;j++){
					r++;
					count1++;
					if(r==a[i] && t==b[i]){
						flag=1;
						break;
					}
				}
			}
			if(flag==0){
				for(j=0;j<y;j++){
					t++;
					count1++;
					if(r==a[i] && t==b[i]){
						flag=1;
						break;
					}
				}
			}
			if(flag==0){
				for(j=0;j<x;j++){
					r--;
					count1++;
					if(r==a[i] && t==b[i]){
						flag=1;
						break;
					}
				}
			}
			flag=0;
			r=q,t=w;
			for(j=0;j<x-w;j++){
				r++;
				count2++;
				if(r==a[i] && t==b[i]){
					flag=1;
					break;
				}
			}
			if(flag==0){
				for(j=0;j<y;j++){
					t--;
					count2++;
					if(r==a[i] && t==b[i]){
						flag=1;
						break;
					}
				}
			}
			if(flag==0){
				for(j=0;j<x;j++){
					r--;
					count2++;
					if(r==a[i] && t==b[i]){
						flag=1;
						break;
					}
				}
			}
			if(flag==0){
				for(j=0;j<y;j++){
					t++;
					count2++;
					if(r==a[i] && t==b[i]){
						flag=1;
						break;
					}
				}
			}
			if(flag==0){
				for(j=0;j<x;j++){
					r++;
					count2++;
					if(r==a[i] && t==b[i]){
						flag=1;
						break;
					}
				}
			}
			if(count1>count2){
				sum+=count2;
			}
			else{
				sum+=count1;
			}
		}
	}
	printf("%d",sum);
}
