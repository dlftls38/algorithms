#include <stdio.h>
int main(){
	long long n,m;
	long long new_n=0,new_m=0;
	int n_num[10]={0},m_num[10]={0};
	int n_top=0,m_top,i=0;
	int re_n_top=0,re_m_top;
	long long re_n,re_m;
	long long u[11]={1,0};
	long long uu=1;
	scanf("%lld%lld",&n,&m);
	for(i=1;i<11;i++){
		u[i]=u[i-1]*10;
	}
	for(i=9;i>-1;i--){
		if(n/u[i]>0){
			n_top=i;
			break;
		}
	}
	for(i=9;i>-1;i--){
		if(m/u[i]>0){
			m_top=i;
			break;
		}
	}
	re_n=n;
	re_m=m;
	for(i=0;i<n_top+1;i++){
		n_num[i]=re_n/u[n_top-i];
		re_n%=u[n_top-i];
	}
	for(i=0;i<m_top+1;i++){
		m_num[i]=re_m/u[m_top-i];
		re_m%=u[m_top-i];
	}
	re_n_top=n_top;
	re_m_top=m_top;
	for(i=0;i<10;i++){
		if(n_num[re_n_top]>m_num[re_m_top]){
			m_num[re_m_top]=10;
		}
		else if(n_num[re_n_top]<m_num[re_m_top]){
			n_num[re_n_top]=10;
		}
		//printf("%d %d\n",n_num[re_n_top],m_num[re_m_top]);
		re_n_top--;
		re_m_top--;
		if(re_n_top==-1 || re_m_top==-1) break;
	}
	for(i=n_top;i>-1;i--){
		if(n_num[i]!=10) new_n+=n_num[i]*uu,uu*=10;
	}
	uu=1;
	for(i=m_top;i>-1;i--){
		if(m_num[i]!=10) new_m+=m_num[i]*uu,uu*=10;
	}
	int count_n=0,count_m=0;
	for(i=0;i<=n_top;i++){
		if(n_num[i]==10) count_n++;
	}
	for(i=0;i<=m_top;i++){
		if(m_num[i]==10) count_m++;
	}
	if(count_n==n_top+1) printf("YODA\n");
	else printf("%lld\n",new_n);
	if(count_m==m_top+1) printf("YODA\n");
	else printf("%lld\n",new_m);
}
