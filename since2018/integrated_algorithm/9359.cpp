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
using namespace std;
long long A,B,N;
int notPrime[100003]; // 소수 아닌 집합 
vector<int> primes; // notPrime에서 소수 걸러냄 
map<long long, int> mp; // N과 나누어 떨어지는 수 집합 map으로 중복  걸러냄 
vector<long long> divisors; // map 으로 중복처리한 divisor을 담음 
int main(){
    int tc;
    scanf("%d",&tc);
    int i,j,t;
    for(i = 2; i <= 100000; i++){
        if(notPrime[i]) continue;
        for(j = 2*i; j <= 100000; j+=i){
            notPrime[j] = 1;
        }
    }
    for(i = 2; i <= 100000; i++){
        if(!notPrime[i]) primes.push_back(i);
    }
    for(t = 1; t <= tc; t++){
    	scanf("%lld%lld%lld",&A,&B,&N);
        divisors.clear();
        mp.clear();
        while(N > 1){
            bool divided = false;
            for(auto p : primes){
                if(N % p == 0) {
                    N /= p; 
                    mp[p] = 1;
                    divided = true;
                    break;
                }
            }
            if(!divided) break;
        }
        if(N != 1) mp[N] = 1;
        for(auto it = mp.begin(); it != mp.end(); it++){
            divisors.push_back((*it).first);
        }
        int size = divisors.size();
        long long ans = 0;
        for(i = 1 ; i < 1<<size ; i++){// bitmask로 divisor 선택 
            int cnt = 0;
            long long div = 1;
            for(j = 0 ; j < size; j++){
                if(i&(1<<j)) div *= divisors[j], cnt++; // divisor가 켜져있으면 공배수에 포함 
            }
            long long lo = (A+div-1)/div*div; // 정확한 개 수를 위한 전처리 
            long long hi = B/div*div; // 정확한 개수를 위한 전처리 
            if(lo>hi) continue;
            long long gasu = (hi-lo)/div + 1; // 범위안에 들어가는 정확한 개수 
            ans += cnt%2 ? gasu : -gasu; // 포함 배제의 원리, 홀수 일때 추가, 짝수 일때 빼기 
        }
        printf("Case #%d: %lld\n", t, B - A + 1 - ans);
    }
}
