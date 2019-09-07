#include <bits/stdc++.h>
using namespace std;

const int N = 60;

long long z[N][2];
long long a[N];
long long b[N];

int main(){
    long long n;
    int k;
    scanf("%lld%d",&n,&k);
	int i,j;
    for(i=0;i<N;i++){
        b[i] = (i % 2 == 0 ? k : 1);
        a[i] = n % k;
        n /= k;
    }

    z[N - 1][1] = 1;

    for(i=N-2;i>=0;i--){
        for(j=0;j<b[i];j++){
            z[i][0] += z[i + 1][0];
            if (j < a[i]){
            	z[i][0] += z[i + 1][1];	
			}
            if (j == a[i]){
            	z[i][1] += z[i + 1][1];	
			}
        }        
    }
	printf("%lld",z[0][0] + z[0][1]);
}

