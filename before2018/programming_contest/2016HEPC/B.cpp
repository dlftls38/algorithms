#include <cstdio>
int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		char f[4],l[4];
		int upper[4],lower[4],usum=0,lsum=0,umin=10,lmin=10;;
		scanf("%s %s",f,l);
		for(int j=0;j<4;j++){
			l[j] -= '0';
			f[j] -= '0';
			if(l[j]-f[j]<0){
				upper[j] = l[j]-f[j]+10;
			}
			else{
				upper[j] = l[j]-f[j];
			}
			if(f[j]-l[j] < 0 ){
				lower[j] = f[j]-l[j]+10;
			}
			else{
				lower[j] = f[j]-l[j];
			}
		}
//		for(int j=0;j<4;j++){
//			printf("%d",lower[j]);
//		}
		for(int j=0;j<4;j++){
			if(upper[j]<umin){
				umin = upper[j];
			}
			if(lower[j]<lmin){
				lmin = lower[j];
			}
		}
		for(int j=0;j<4;j++){
			upper[j]-=umin;
			lower[j]-=lmin;
		}
		usum += umin;
		lsum += lmin;
		for(int j=0;j<4;j++){
			if(upper[j]!=0){
				if(upper[j]<5){
					if(upper[j]%3==0)
						usum += upper[j]/3;
					else{
						usum += upper[j]/3+1;
					}
				}
				else{
					upper[j] = 10 - upper[j];
					if(upper[j]%3==0)
						usum += upper[j]/3;
					else{
						usum += upper[j]/3+1;
					}
				}
			}
			if(lower[j]!=0){
				if(lower[j]<5){
					if(lower[j]%3==0)
						lsum += lower[j]/3;
					else{
						lsum += lower[j]/3+1;
					}
				}
				else{
					lower[j] = 10 - lower[j];
					if(lower[j]%3==0)
						lsum += lower[j]/3;
					else{
						lsum += lower[j]/3+1;
					}
				}
			}
		}
		if(usum<lsum){
			printf("%d\n",usum);
		}
		else{
			printf("%d\n",lsum);
		}
	}
}
