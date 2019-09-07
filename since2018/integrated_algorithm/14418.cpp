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
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	int a1,a2,b1,b2,c1,c2;
	scanf("%d%d%d%d%d%d",&a1,&a2,&b1,&b2,&c1,&c2);
	if(a1==c1){
		a2+=c2;
		if(a1==b1 || a1==b2 || a2==b1 || a2==b2){
			printf("YES");
			return 0;
		}
		a2-=c2;
	}
	if(a1==c2){
		a2+=c1;
		if(a1==b1 || a1==b2 || a2==b1 || a2==b2){
			printf("YES");
			return 0;
		}
		a2-=c1;
	}
	if(a2==c1){
		a1+=c2;
		if(a1==b1 || a1==b2 || a2==b1 || a2==b2){
			printf("YES");
			return 0;
		}
		a1-=c2;
	}
	if(a2==c2){
		a1+=c1;
		if(a1==b1 || a1==b2 || a2==b1 || a2==b2){
			printf("YES");
			return 0;
		}
		a1-=c1;
	}
	if(b1==c1){
		b2+=c2;
		if(b1==a1 || b1==a2 || b2==a1 || b2==a2){
			printf("YES");
			return 0;
		}
		b2-=c2;
	}
	if(b1==c2){
		b2+=c1;
		if(b1==a1 || b1==a2 || b2==a1 || b2==a2){
			printf("YES");
			return 0;
		}
		b2-=c1;
	}
	if(b2==c1){
		b1+=c2;
		if(b1==a1 || b1==a2 || b2==a1 || b2==a2){
			printf("YES");
			return 0;
		}
		b1-=c2;
	}
	if(b2==c2){
		b1+=c1;
		if(b1==a1 || b1==a2 || b2==a1 || b2==a2){
			printf("YES");
			return 0;
		}
		b1-=c1;
	}
	if(a1==b1){
		a2+=b2;
		if(a1==c1 || a1==c2 || a2==c1 || a2==c2){
			printf("YES");
			return 0;
		}
		a2-=b2;
	}
	if(a1==b2){
		a2+=b1;
		if(a1==c1 || a1==c2 || a2==c1 || a2==c2){
			printf("YES");
			return 0;
		}
		a2-=b1;
	}
	if(a2==b1){
		a1+=b2;
		if(a1==c1 || a1==c2 || a2==c1 || a2==c2){
			printf("YES");
			return 0;
		}
		a1-=b2;
	}
	if(a2==b2){
		a1+=b1;
		if(a1==c1 || a1==c2 || a2==c1 || a2==c2){
			printf("YES");
			return 0;
		}
		a1-=b1;
	}
	
	if(b1==a1){
		b2+=a2;
		if(b1==c1 || b1==c2 || b2==c1 || b2==c2){
			printf("YES");
			return 0;
		}
		b2-=a2;
	}
	if(b1==a2){
		b2+=a1;
		if(b1==c1 || b1==c2 || b2==c1 || b2==c2){
			printf("YES");
			return 0;
		}
		b2-=a1;
	}
	if(b2==a1){
		b1+=a2;
		if(b1==c1 || b1==c2 || b2==c1 || b2==c2){
			printf("YES");
			return 0;
		}
		b1-=a2;
	}
	if(b2==a2){
		b1+=a1;
		if(b1==c1 || b1==c2 || b2==c1 || b2==c2){
			printf("YES");
			return 0;
		}
		b1-=a1;
	}
	
	if(c1==a1){
		c2+=a2;
		if(c1==b1 || c1==b2 || c2==b1 || c2==b2){
			printf("YES");
			return 0;
		}
		c2-=a2;
	}
	if(c1==a2){
		c2+=a1;
		if(c1==b1 || c1==b2 || c2==b1 || c2==b2){
			printf("YES");
			return 0;
		}
		c2-=a1;
	}
	if(c2==a1){
		c1+=a2;
		if(c1==b1 || c1==b2 || c2==b1 || c2==b2){
			printf("YES");
			return 0;
		}
		c1-=a2;
	}
	if(c2==a2){
		c1+=a1;
		if(c1==b1 || c1==b2 || c2==b1 || c2==b2){
			printf("YES");
			return 0;
		}
		c1-=a1;
	}
	
	if(c1==b1){
		c2+=b2;
		if(c1==a1 || c1==a2 || c2==a1 || c2==a2){
			printf("YES");
			return 0;
		}
		c2-=b2;
	}
	if(c1==b2){
		c2+=b1;
		if(c1==a1 || c1==a2 || c2==a1 || c2==a2){
			printf("YES");
			return 0;
		}
		c2-=b1;
	}
	if(c2==b1){
		c1+=b2;
		if(c1==a1 || c1==a2 || c2==a1 || c2==a2){
			printf("YES");
			return 0;
		}
		c1-=b2;
	}
	if(c2==b2){
		c1+=b1;
		if(c1==a1 || c1==a2 || c2==a1 || c2==a2){
			printf("YES");
			return 0;
		}
		c1-=b1;
	}
	printf("NO");
}
