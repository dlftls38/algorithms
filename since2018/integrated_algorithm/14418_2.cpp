#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
const int INF = 987654321;
const int MOD = 1000000007;

int main(){
  pii p[3];
  for(int i=0;i<3;i++){
    scanf("%d %d",&p[i].first,&p[i].second);
    if(p[i].second > p[i].first)
      swap(p[i].second,p[i].first);
  }
  sort(p,p+3);
  int m = p[2].first;
  if(p[0].first == m && p[1].first == m && p[0].second+p[1].second+p[2].second == m)
    return !printf("YES\n");
  if(p[0].first == p[1].first){
    if(p[0].first+p[2].second == m && p[0].second+p[1].second == m)
      return !printf("YES\n");
  }
  if(p[0].first == p[1].second){
    if(p[0].first+p[2].second == m && p[0].second+p[1].first == m)
      return !printf("YES\n");
  }
  if(p[0].second == p[1].first){
    if(p[0].second+p[2].second == m && p[0].first+p[1].second == m)
      return !printf("YES\n");
  }
  if(p[0].second == p[1].second){
    if(p[0].second+p[2].second == m && p[0].first+p[1].first == m)
      return !printf("YES\n");
  }
  printf("NO\n");
}
