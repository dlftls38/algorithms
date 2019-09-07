#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
vector<int>numbers;
int numbers_len;
vector<vector<int> >combination;
int combination_size[8];
vector<vector<string>> relations;
int relations_size;
int ans;
void solve(int pos,int element_pos){
	int i,j,k;
	if(element_pos==numbers_len){
		int sum=0;
		for(i=0;i<pos;i++){
			set<vector<string> >s;
			for(j=0;j<relations_size;j++){
				vector<string>v;
				for(k=0;k<combination_size[i];k++){
					v.push_back(relations[j][combination[i][k]]);
				}
				s.insert(v);
			}
			if(s.size()==relations_size){
				sum++;
			}
		}
		ans=max(ans,sum);
		return;
	}
	vector<int>temp;
	combination.push_back(temp);
	for(i=element_pos;i<numbers_len;i++){
		combination[pos].push_back(numbers[i]);
		combination_size[pos]=i-element_pos+1;
		solve(pos+1,i+1);
	}
	combination.erase(combination.begin()+pos);
}
int solution(vector<vector<string>> relation) {
    int i;
    relations=relation;
    relations_size=relations.size();
    for(i=0;i<relations[0].size();i++){
        numbers.push_back(i);
    }
	numbers_len=numbers.size();
	int permutation_count=1;
	for(i=2;i<=numbers_len;i++){
		permutation_count*=i;
	}
    for(i=0;i<permutation_count;i++){
        solve(0,0);
        next_permutation(numbers.begin(),numbers.end());
    }
    return ans;
}
