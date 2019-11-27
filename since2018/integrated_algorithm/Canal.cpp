#include<stdio.h>
#include<map>
#include<stack>
#include<queue>
#include<limits.h>
#include<vector>
#include<set>
#include<string>
#include<string.h>
#include<algorithm>
#define MOD 16769023
#define INF 987654321
using namespace std;
double x[300000];
double y[300000];
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%lf%lf",&x[i],&y[i]);
	}
	double xmid=0;
	double ymid=0;
	double ans=2000000000;
	while(1){
		double xmin=2000000000;
		double xmax=-2000000000;
		double ymin=2000000000;
		double ymax=-2000000000;
		for(i=0;i<n;i++){
			if(abs(xmid-x[i])<abs(ymid-y[i])){
				xmin=min(xmin,x[i]);
				xmax=max(xmax,x[i]);
			}
			else{
				ymin=min(ymin,y[i]);
				ymax=max(ymax,y[i]);
			}
		}
		//printf("%f %f %f %f %f %f %d\n",xmin,xmax,ymin,ymax,xmid,ymid,ans);
		ans=min(ans,max({abs(xmin-xmid),abs(ymin-ymid),abs(xmax-xmid),abs(ymax-ymid)}));
		if(xmid==(xmax+xmin)/2 && ymid==(ymax+ymin)/2){
			break;
		}
		xmid=(xmax+xmin)/2;
		ymid=(ymax+ymin)/2;
		//printf("%f %f\n",xmid,ymid);
	}
	printf("%.1f",round(ans*10)/10);
}
