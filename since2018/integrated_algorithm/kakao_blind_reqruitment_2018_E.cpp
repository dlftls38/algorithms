#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct node{
    int x,y,node_number;
    node *left=NULL, *right=NULL, *parent=NULL;
};
vector<struct node>level[1001];
vector<vector<int>> answer;
void preorder(node *pointer){
    if(pointer){
        answer[0].push_back(pointer->node_number);
        preorder(pointer->left);
        preorder(pointer->right);
    }
}
void postorder(node *pointer){
    if(pointer){
        postorder(pointer->left);
        postorder(pointer->right);
        answer[1].push_back(pointer->node_number);
    }
}
bool cmp(struct node a, struct node b){
    if(a.y > b.y){
        return true;
    }
    else{
        return false;
    }
}
bool cmp2(struct node a, struct node b){
    if(a.x < b.x){
        return true;
    }
    else{
        return false;
    }
}
int parent_level,child_level;
node *child_node;
node *parent_node;
void find_parent(){
    if(parent_level+1==child_level){
        if(parent_node->x<child_node->x){
            parent_node->right=child_node;
            child_node->parent=parent_node;
        }
        else{
            parent_node->left=child_node;
            child_node->parent=parent_node;
        }
        return;
    }
    if(parent_node->x<child_node->x){
        parent_node=parent_node->right;
        parent_level++;
        find_parent();
    }
    else{
        parent_node=parent_node->left;
        parent_level++;
        find_parent();
    }
}
vector<vector<int>> solution(vector<vector<int>> nodeinfo) {
    vector<struct node>sorted;
    int number_count=1;
    for(auto it : nodeinfo){
        node nodes;
        nodes.x=it[0];
        nodes.y=it[1];
        nodes.node_number=number_count;
        sorted.push_back(nodes);
        number_count++;
    }
    sort(sorted.begin(),sorted.end(),cmp);
    int last_y=-1;
    int cur_level=0;
    for(auto it : sorted){
        if(it.y!=last_y){
            cur_level++;
            last_y=it.y;
        }
        level[cur_level].push_back(it);
    }
    int i,j;
    for(i=1;i<=cur_level;i++){
        sort(level[i].begin(),level[i].end(),cmp2);
    }
    for(i=2;i<=cur_level;i++){
        int child_size=level[i].size();
        child_level=i;
        for(j=0;j<child_size;j++){
            parent_level=1;
            parent_node=&level[1][0];
            child_node=&level[i][j];
            find_parent();
        }
    }
    answer.push_back({});
    answer.push_back({});
    preorder(&level[1][0]);
    postorder(&level[1][0]);
    return answer;
}
int main(){
	vector<vector<int>> res = solution({{5,3},{11,5},{13,3},{3,5},{6,1},{1,3},{8,6},{7,2},{2,2}});
	for(int i=0;i<2;i++){
		for(int j=0;j<res[i].size();j++){
			printf("%d ",res[i][j]);
		}
		printf("\n");
	}
}
