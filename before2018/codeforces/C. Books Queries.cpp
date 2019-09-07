#include <stdio.h>
#include <map>
using namespace std;
map<int, int> m;
int main(){
	int q;
	scanf("%d",&q);
	int l=400000,r=400000;
	char k;
	int id;
	int i,j;
	for(i=0;i<q;i++){
		scanf(" %c%d",&k,&id);
		if(k=='L'){
			m.insert(pair<int,int>(id,--l));
		}
		else if(k=='R'){
			m.insert(pair<int,int>(id,r++));
		}
		else{
			if(m[id]-l>r-m[id]-1){
				printf("%d\n",r-m[id]-1);
			}
			else{
				printf("%d\n",m[id]-l);
			}
		}
	}
}
