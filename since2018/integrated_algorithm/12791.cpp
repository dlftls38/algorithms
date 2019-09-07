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
	int q;
	scanf("%d",&q);
	vector<string>album[2017];
	album[1967].push_back("DavidBowie");
	album[1969].push_back("SpaceOddity");
	album[1970].push_back("TheManWhoSoldTheWorld");
	album[1971].push_back("HunkyDory");
	album[1972].push_back("TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars");
	album[1973].push_back("AladdinSane");
	album[1973].push_back("PinUps");
	album[1974].push_back("DiamondDogs");
	album[1975].push_back("YoungAmericans");
	album[1976].push_back("StationToStation");
	album[1977].push_back("Low");
	album[1977].push_back("Heroes");
	album[1979].push_back("Lodger");
	album[1980].push_back("ScaryMonstersAndSuperCreeps");
	album[1983].push_back("LetsDance");
	album[1984].push_back("Tonight");
	album[1987].push_back("NeverLetMeDown");
	album[1993].push_back("BlackTieWhiteNoise");
	album[1995].push_back("1.Outside");
	album[1997].push_back("Earthling");
	album[1999].push_back("Hours");
	album[2002].push_back("Heathen");
	album[2003].push_back("Reality");
	album[2013].push_back("TheNextDay");
	album[2016].push_back("BlackStar");
	while(q--){
		int s,e;
		scanf("%d%d",&s,&e);
		int i,j;
		int cnt=0;
		vector<pair<int,string> >ans;
		for(i=s;i<=e;i++){
			int size=album[i].size();
			cnt+=size;
			for(j=0;j<size;j++){
				ans.push_back({i,album[i][j]});
			}
		}
		printf("%d\n",cnt);
		for(auto it : ans){
			printf("%d %s\n",it.first,it.second.c_str());
		}
	}
}
