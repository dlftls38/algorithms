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
int notPrime[100003]; // �Ҽ� �ƴ� ���� 
vector<int> primes; // notPrime���� �Ҽ� �ɷ��� 
map<long long, int> mp; // N�� ������ �������� �� ���� map���� �ߺ�  �ɷ��� 
vector<long long> divisors; // map ���� �ߺ�ó���� divisor�� ���� 
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
        for(i = 1 ; i < 1<<size ; i++){// bitmask�� divisor ���� 
            int cnt = 0;
            long long div = 1;
            for(j = 0 ; j < size; j++){
                if(i&(1<<j)) div *= divisors[j], cnt++; // divisor�� ���������� ������� ���� 
            }
            long long lo = (A+div-1)/div*div; // ��Ȯ�� �� ���� ���� ��ó�� 
            long long hi = B/div*div; // ��Ȯ�� ������ ���� ��ó�� 
            if(lo>hi) continue;
            long long gasu = (hi-lo)/div + 1; // �����ȿ� ���� ��Ȯ�� ���� 
            ans += cnt%2 ? gasu : -gasu; // ���� ������ ����, Ȧ�� �϶� �߰�, ¦�� �϶� ���� 
        }
        printf("Case #%d: %lld\n", t, B - A + 1 - ans);
    }
}
