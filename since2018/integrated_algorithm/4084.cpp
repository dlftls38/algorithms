#include <bits/stdc++.h>
#define INF 987654321
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	while(1){
		int a,b,c,d;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if(a+b+c+d==0)break;
		int cnt=0;
		while(!(a==b && b==c && c==d)){
			cnt++;
			int temp1=abs(a-b);
			int temp2=abs(b-c);
			int temp3=abs(c-d);
			int temp4=abs(d-a);
			a=temp1;
			b=temp2;
			c=temp3;
			d=temp4;
		}
		printf("%d\n",cnt);
	}
}
