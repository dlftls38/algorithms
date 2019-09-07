#include<iostream>
#include<string>
#include<vector>
using namespace std;
 
enum color { RED, BLUE };
 
vector <int> RED_GROUP;
vector <int> BLUE_GROUP;
vector <int> map[20001];
 
int vertex[20001];
string res = "YES";
int v, e;
int cnt = 0;
 
void dfs(int v_, int color) {
    vertex[v_] = color;
    if (color == RED)
        RED_GROUP.push_back(v_);
    else if (color == BLUE)
        BLUE_GROUP.push_back(v_);
    cnt++;
    if (cnt == v)
        return;
 
    for (int i = 0; i < map[v_].size(); i++) {
        if (vertex[map[v_][i]] == -1)
            dfs(map[v_][i], (color + 1) % 2);
        if (vertex[map[v_][i]] == color) {
            res = "NO";
            return;
        }
    }
 
    return;
}
 
int main() {
    int t;
    cin >> t;
 
    for (int i = 0; i < t; i++) {
        res = "YES";
        for (int j = 0; j < 20001; j++) {
            vertex[j] = -1;
            map[j].clear();
        }
        cin >> v >> e;
 
        for (int j = 0; j < e; j++) {
            int v_1, v_2;
            cin >> v_1 >> v_2;
 
            map[v_1].push_back(v_2);
            map[v_2].push_back(v_1);
        }
 
        for (int j = 1; j <= v; j++) {
            if (vertex[j] == -1)
                dfs(j, RED);
        }
        cout << "이분 그래프 여부 : ";
        cout << res << endl;
        if (!res.compare("YES")) {
            
            cout << "RED GROUP : ";
            for (int i = 0; i < RED_GROUP.size(); i++) {
                cout << RED_GROUP[i] << " ";
            }
            cout << "\nBLUE GROUP : ";
            for (int i = 0; i < BLUE_GROUP.size(); i++) {
                cout << BLUE_GROUP[i] << " ";
            }
            cout << endl;
        }
    }
 
 
    return 0;
}

