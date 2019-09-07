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
using namespace std;
int main(){
	int i,n,s=0;

    scanf("%d",&n);

    for(i=1;i*i<n;i++){
        if(n%i==0){
            s+=i;
            s+=n/i;
        }
    }

    if(i*i==n)
        s+=i;

    printf("%d",s);

    return 0;
}
