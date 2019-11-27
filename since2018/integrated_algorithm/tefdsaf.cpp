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
#define INF 987654321
#define MAX_VALUE 1000000000
#define MOD 1000000009
#define pi 3.14159265
using namespace std;
typedef pair<int,int> pii;
int main(){
	int t;
	cin>>t;
	while(t--){
		double h,m,s;
		cin>>h>>m>>s;
		double oa = atan2(sin((-h/12*360+90)*pi/180), cos((-h/12*360+90)*pi/180))*180/pi;
		double ob = atan2(sin((-m/60*360+90)*pi/180), cos((-m/60*360+90)*pi/180))*180/pi;
		double oc = atan2(sin((-s/60*360+90)*pi/180), cos((-s/60*360+90)*pi/180))*180/pi;
		//printf("%f %f\n",sin((-h/12*360+90)*pi/180),cos((-h/12*360+90)*pi/180));
		//printf("%f %f\n",sin((-m/60*360+90)*pi/180),cos((-m/60*360+90)*pi/180));
		//printf("%f %f\n",sin((-s/60*360+90)*pi/180),cos((-s/60*360+90)*pi/180));
		while(oa<0){
			oa+=360;
		}
		while(ob<0){
			ob+=360;
		}
		while(oc<0){
			oc+=360;
		}
		while(oa>360){
			oa-=360;
		}
		while(ob>360){
			ob-=360;
		}
		while(oc>360){
			oc-=360;
		}
		oa-=1.0*30*(60*m+s)/3600.0;
		ob-=1.0*6*(s)/60.0;
		//printf("%f\n",oa);
		//printf("%f\n",ob);
		//printf("%f\n",oc);
		double ans = INF;
		ans=min(ans,abs(oa-ob));
		ans=min(ans,abs(oa-oc));
		ans=min(ans,abs(ob-oc));
		ans=min(ans,360-abs(oa-ob));
		ans=min(ans,360-abs(oa-oc));
		ans=min(ans,360-abs(ob-oc));
		printf("%f\n",ans);
	}
}
