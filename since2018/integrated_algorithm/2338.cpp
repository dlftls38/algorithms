#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
using namespace std;
int main(){
	char a[1001]={0};
	char b[1001]={0};
	scanf("%s%s",a,b);
	int lena=strlen(a);
	int lenb=strlen(b);
	reverse(a,a+lena);
	reverse(b,b+lenb);
	int minusa=0;
	int minusb=0;
	int i,j;
	if(a[lena-1]=='-'){
		minusa=1;
		a[lena-1]=0;
		lena--;
	}
	if(b[lenb-1]=='-'){
		minusb=1;
		b[lenb-1]=0;
		lenb--;
	}
	int big=2;
	if(lena>lenb){
		big=0;
	}
	else if(lena<lenb){
		big=1;
	}
	else{
		for(i=lena-1;i>=0;i--){
			if(a[i]<b[i]){
				big=1;	
				break;
			}
			else if(a[i]>b[i]){
				big=0;
				break;
			}
		}
	}
	int q[1001]={0};
	int w[1001]={0};
	int e[3001]={0};
	for(i=0;i<lena;i++){
		q[i]=a[i]-48;
	}
	for(i=0;i<lenb;i++){
		w[i]=b[i]-48;
	}
	if(lena==1 && q[0]==0){
		lena=0;
	}
	if(lenb==1 && w[0]==0){
		lenb=0;
	}
	if(lena==0 && lenb==0){
		printf("0\n0\n0");
		return 0;
	}
	else if(lena==0){
		if(minusb==1){
			printf("-");
			for(i=lenb-1;i>=0;i--){
				printf("%d",w[i]);
			}
			printf("\n");
			for(i=lenb-1;i>=0;i--){
				printf("%d",w[i]);
			}
			printf("\n");
			printf("0");
			return 0;
		}
		else{
			for(i=lenb-1;i>=0;i--){
				printf("%d",w[i]);
			}
			printf("\n");
			printf("-");
			for(i=lenb-1;i>=0;i--){
				printf("%d",w[i]);
			}
			printf("\n");
			printf("0");
			return 0;
		}
	}
	else if(lenb==0){
		if(minusa==1){
			printf("-");
			for(i=lena-1;i>=0;i--){
				printf("%d",q[i]);
			}
			printf("\n");
			printf("-");
			for(i=lena-1;i>=0;i--){
				printf("%d",q[i]);
			}
			printf("\n");
			printf("0");
			return 0;
		}
		else{
			for(i=lena-1;i>=0;i--){
				printf("%d",q[i]);
			}
			printf("\n");
			for(i=lena-1;i>=0;i--){
				printf("%d",q[i]);
			}
			printf("\n");
			printf("0");
			return 0;
		}
	}
	int lenc=0;
	if(big==0){
		if(minusa==1 && minusb==1){
			for(i=0;i<lena;i++){
				e[i]+=q[i]+w[i];
				if(e[i]>=10){
					e[i]-=10;
					e[i+1]++;
				}
			}
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			printf("-");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
			memset(e,0,sizeof(e));
			for(i=0;i<lena;i++){
				e[i]+=q[i]-w[i];
				if(e[i]<0){
					e[i+1]--;
					e[i]+=10;
				}
			}
			lenc=0;
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			printf("-");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
			memset(e,0,sizeof(e));
			for(i=0;i<lena;i++){
				for(j=0;j<lenb;j++){
					e[i+j]+=q[i]*w[j];
					if(e[i+j]>=10){
						e[i+j+1]+=e[i+j]/10;
						e[i+j]%=10;
					}
				}
			}
			lenc=0;
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			//printf("-");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
		}
		else if(minusa==0 && minusb==1){
			for(i=0;i<lena;i++){
				e[i]+=q[i]-w[i];
				if(e[i]<0){
					e[i]+=10;
					e[i+1]--;
				}
			}
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			//printf("-");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
			memset(e,0,sizeof(e));
			for(i=0;i<lena;i++){
				e[i]+=q[i]+w[i];
				if(e[i]>=10){
					e[i+1]++;
					e[i]-=10;
				}
			}
			lenc=0;
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			//printf("-");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
			memset(e,0,sizeof(e));
			for(i=0;i<lena;i++){
				for(j=0;j<lenb;j++){
					e[i+j]+=q[i]*w[j];
					if(e[i+j]>=10){
						e[i+j+1]+=e[i+j]/10;
						e[i+j]%=10;
					}
				}
			}
			lenc=0;
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			printf("-");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
		}
		else if(minusa==1 && minusb==0){
			for(i=0;i<lena;i++){
				e[i]+=q[i]-w[i];
				if(e[i]<0){
					e[i]+=10;
					e[i+1]--;
				}
			}
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			printf("-");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
			memset(e,0,sizeof(e));
			for(i=0;i<lena;i++){
				e[i]+=q[i]+w[i];
				if(e[i]>=10){
					e[i+1]++;
					e[i]-=10;
				}
			}
			lenc=0;
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			printf("-");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
			memset(e,0,sizeof(e));
			for(i=0;i<lena;i++){
				for(j=0;j<lenb;j++){
					e[i+j]+=q[i]*w[j];
					if(e[i+j]>=10){
						e[i+j+1]+=e[i+j]/10;
						e[i+j]%=10;
					}
				}
			}
			lenc=0;
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			printf("-");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
		}
		else if(minusa==0 && minusb==0){
			for(i=0;i<lena;i++){
				e[i]+=q[i]+w[i];
				if(e[i]>=10){
					e[i]-=10;
					e[i+1]++;
				}
			}
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			//printf("-");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
			memset(e,0,sizeof(e));
			for(i=0;i<lena;i++){
				e[i]+=q[i]-w[i];
				if(e[i]<0){
					e[i+1]--;
					e[i]+=10;
				}
			}
			lenc=0;
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			//printf("-");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
			memset(e,0,sizeof(e));
			for(i=0;i<lena;i++){
				for(j=0;j<lenb;j++){
					e[i+j]+=q[i]*w[j];
					if(e[i+j]>=10){
						e[i+j+1]+=e[i+j]/10;
						e[i+j]%=10;
					}
				}
			}
			lenc=0;
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			//printf("-");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
		}
	}
	else if(big==1){
		if(minusa==1 && minusb==1){
			for(i=0;i<lenb;i++){
				e[i]+=q[i]+w[i];
				if(e[i]>=10){
					e[i]-=10;
					e[i+1]++;
				}
			}
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			printf("-");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
			memset(e,0,sizeof(e));
			for(i=0;i<lenb;i++){
				e[i]+=-q[i]+w[i];
				if(e[i]<0){
					e[i+1]--;
					e[i]+=10;
				}
			}
			lenc=0;
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			//printf("-");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
			memset(e,0,sizeof(e));
			for(i=0;i<lena;i++){
				for(j=0;j<lenb;j++){
					e[i+j]+=q[i]*w[j];
					if(e[i+j]>=10){
						e[i+j+1]+=e[i+j]/10;
						e[i+j]%=10;
					}
				}
			}
			lenc=0;
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			//printf("-");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
		}
		else if(minusa==0 && minusb==1){
			for(i=0;i<lenb;i++){
				e[i]+=-q[i]+w[i];
				if(e[i]<0){
					e[i]+=10;
					e[i+1]--;
				}
			}
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			printf("-");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
			memset(e,0,sizeof(e));
			for(i=0;i<lenb;i++){
				e[i]+=q[i]+w[i];
				if(e[i]>=10){
					e[i+1]++;
					e[i]-=10;
				}
			}
			lenc=0;
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			//printf("-");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
			memset(e,0,sizeof(e));
			for(i=0;i<lena;i++){
				for(j=0;j<lenb;j++){
					e[i+j]+=q[i]*w[j];
					if(e[i+j]>=10){
						e[i+j+1]+=e[i+j]/10;
						e[i+j]%=10;
					}
				}
			}
			lenc=0;
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			printf("-");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
		}
		else if(minusa==1 && minusb==0){
			for(i=0;i<lenb;i++){
				e[i]+=-q[i]+w[i];
				if(e[i]<0){
					e[i]+=10;
					e[i+1]--;
				}
			}
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			//printf("-");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
			memset(e,0,sizeof(e));
			for(i=0;i<lenb;i++){
				e[i]+=q[i]+w[i];
				if(e[i]>=10){
					e[i+1]++;
					e[i]-=10;
				}
			}
			lenc=0;
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			printf("-");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
			memset(e,0,sizeof(e));
			for(i=0;i<lena;i++){
				for(j=0;j<lenb;j++){
					e[i+j]+=q[i]*w[j];
					if(e[i+j]>=10){
						e[i+j+1]+=e[i+j]/10;
						e[i+j]%=10;
					}
				}
			}
			lenc=0;
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			printf("-");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
		}
		else if(minusa==0 && minusb==0){
			for(i=0;i<lenb;i++){
				e[i]+=q[i]+w[i];
				if(e[i]>=10){
					e[i]-=10;
					e[i+1]++;
				}
			}
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			//printf("-");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
			memset(e,0,sizeof(e));
			for(i=0;i<lenb;i++){
				e[i]+=-q[i]+w[i];
				if(e[i]<0){
					e[i+1]--;
					e[i]+=10;
				}
			}
			lenc=0;
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			printf("-");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
			memset(e,0,sizeof(e));
			for(i=0;i<lena;i++){
				for(j=0;j<lenb;j++){
					e[i+j]+=q[i]*w[j];
					if(e[i+j]>=10){
						e[i+j+1]+=e[i+j]/10;
						e[i+j]%=10;
					}
				}
			}
			lenc=0;
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			//printf("-");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
		}
	}
	else{
		if(minusa==1 && minusb==1){
			for(i=0;i<lena;i++){
				e[i]+=q[i]+w[i];
				if(e[i]>=10){
					e[i]-=10;
					e[i+1]++;
				}
			}
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			printf("-");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
			memset(e,0,sizeof(e));
			for(i=0;i<lena;i++){
				e[i]+=-q[i]+w[i];
				if(e[i]<0){
					e[i+1]--;
					e[i]+=10;
				}
			}
			lenc=0;
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			//printf("-");
			printf("0");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
			memset(e,0,sizeof(e));
			for(i=0;i<lena;i++){
				for(j=0;j<lenb;j++){
					e[i+j]+=q[i]*w[j];
					if(e[i+j]>=10){
						e[i+j+1]+=e[i+j]/10;
						e[i+j]%=10;
					}
				}
			}
			lenc=0;
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			//printf("-");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
		}
		else if(minusa==0 && minusb==1){
			for(i=0;i<lena;i++){
				e[i]+=-q[i]+w[i];
				if(e[i]<0){
					e[i]+=10;
					e[i+1]--;
				}
			}
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			//printf("-");
			printf("0");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
			memset(e,0,sizeof(e));
			for(i=0;i<lena;i++){
				e[i]+=q[i]+w[i];
				if(e[i]>=10){
					e[i+1]++;
					e[i]-=10;
				}
			}
			lenc=0;
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			//printf("-");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
			memset(e,0,sizeof(e));
			for(i=0;i<lena;i++){
				for(j=0;j<lenb;j++){
					e[i+j]+=q[i]*w[j];
					if(e[i+j]>=10){
						e[i+j+1]+=e[i+j]/10;
						e[i+j]%=10;
					}
				}
			}
			lenc=0;
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			printf("-");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
		}
		else if(minusa==1 && minusb==0){
			for(i=0;i<lena;i++){
				e[i]+=-q[i]+w[i];
				if(e[i]<0){
					e[i]+=10;
					e[i+1]--;
				}
			}
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			//printf("-");
			printf("0");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
			memset(e,0,sizeof(e));
			for(i=0;i<lena;i++){
				e[i]+=q[i]+w[i];
				if(e[i]>=10){
					e[i+1]++;
					e[i]-=10;
				}
			}
			lenc=0;
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			printf("-");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
			memset(e,0,sizeof(e));
			for(i=0;i<lena;i++){
				for(j=0;j<lenb;j++){
					e[i+j]+=q[i]*w[j];
					if(e[i+j]>=10){
						e[i+j+1]+=e[i+j]/10;
						e[i+j]%=10;
					}
				}
			}
			lenc=0;
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			printf("-");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
		}
		else if(minusa==0 && minusb==0){
			for(i=0;i<lena;i++){
				e[i]+=q[i]+w[i];
				if(e[i]>=10){
					e[i]-=10;
					e[i+1]++;
				}
			}
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			//printf("-");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
			memset(e,0,sizeof(e));
			for(i=0;i<lena;i++){
				e[i]+=-q[i]+w[i];
				if(e[i]<0){
					e[i+1]--;
					e[i]+=10;
				}
			}
			lenc=0;
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			//printf("-");
			printf("0");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
			memset(e,0,sizeof(e));
			for(i=0;i<lena;i++){
				for(j=0;j<lenb;j++){
					e[i+j]+=q[i]*w[j];
					if(e[i+j]>=10){
						e[i+j+1]+=e[i+j]/10;
						e[i+j]%=10;
					}
				}
			}
			lenc=0;
			for(i=3000;i>=0;i--){
				if(e[i]>0){
					lenc=i+1;
					break;
				}
			}
			//printf("-");
			for(i=lenc-1;i>=0;i--){
				printf("%d",e[i]);
			}
			printf("\n");
		}
	}
}