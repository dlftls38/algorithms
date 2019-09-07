#include<stdio.h>
#include<algorithm>

using namespace std;

struct info {

    int score_a,score_b;

};
info a[100000];
  

bool compare(info x, info y) { return x.score_a<y.score_a; }

  

int main() {

	int t;
	scanf("%d",&t);
	while(t--){
		int n,i,k=0,min=1000000;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d%d",&a[i].score_a,&a[i].score_b);
		}
		sort(a,a+n,compare);
		for(i=0;i<n;i++){
			if(min>a[i].score_b){
				min=a[i].score_b;
				k++;
			}
		}
		printf("%d\n",k);
	}



  

    return 0;

}

