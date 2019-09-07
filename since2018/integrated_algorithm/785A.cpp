#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	int ans=0;
	for(i=0;i<n;i++){
		char a[30]={0};
		scanf("%s",a);
		if(strcmp(a,"Tetrahedron")==0){
			ans+=4;
		}
		else if(strcmp(a,"Cube")==0){
			ans+=6;
		}
		else if(strcmp(a,"Octahedron")==0){
			ans+=8;
		}
		else if(strcmp(a,"Dodecahedron")==0){
			ans+=12;
		}
		else{
			ans+=20;
		}
	}
	printf("%d",ans);
}
