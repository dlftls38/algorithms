#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int solution(vector<vector<string>> relation) {
	int i,j,k;
	int attributes_size=relation[0].size();
	int relation_size=relation.size();
	int bits=(1<<attributes_size);
	vector<int>combinations;
	int combinations_size=0;
	for(i=0;i<bits;i++){
		set<vector<string> >s;
		for(j=0;j<relation_size;j++){
			vector<string>v;
			for(k=0;k<attributes_size;k++){
				if(i&(1<<k)){
					v.push_back(relation[j][k]);
				}
			}
			s.insert(v);
		}
		if(s.size()==relation_size){
			int check=0;
			for(j=0;j<combinations_size;j++){
				if((i&combinations[j])==combinations[j]){
					check=1;
					break;
				}
			}
			if(check==0){
				combinations.push_back(i);
				combinations_size++;
			}
		}
	}
    return combinations_size;
}
//int main(){
//	printf("%d",solution({{"100","ryan","music","2"},{"200","apeach","math","2"},{"300","tube","computer","3"},{"400","con","computer","4"},{"500","muzi","music","3"},{"600","apeach","music","2"}}));
//}
