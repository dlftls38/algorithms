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
typedef pair<int,int> pii;
int main(){
	int n,q;
	scanf("%d%d",&n,&q);
	int i,j;
	for(i=2;i<=n;i++){
		int temp;
		scanf("%d",&temp);
	}
	set<int>s;
	for(i=0;i<q;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		if(a==1){
			s.insert(b);
		}
		else{
			if(s.size()==0){
				printf("-1\n");
			}
			else{
				auto it=s.lower_bound(b);
				if(it==s.end()){
					printf("%d\n",abs(b-*(--it))); // ���� ���ʿ� ���� �� 
				}
				else{
					if(s.size()==1){
						printf("%d\n",abs(b-*it)); // �� ��ġ�� �����ؼ� �����ʿ� �ϳ� ���� �� 
					}
					else{ // �ΰ� �̻� ���� �� 
						if(it==s.begin()){
							printf("%d\n",abs(b-*it)); // ���� ����� ���� �ڸ� �� �� 
						}
						else{
							auto right = *it;
							it--;
							auto left = *it;
							printf("%d\n",min(abs(b-left),abs(b-right))); // �� ��ġ�� ������ �����ʿ� �ϳ�, �� ���� �ϳ� �� 
						}
					}
				}
			}
		}
	}
}
