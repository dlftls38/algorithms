#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int answer=m/n;
	if(m%n>0) answer++;
	printf("%d",answer);
}
