#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int n, res;
char str[21];
int separate[21];

int calc() {
	vector<string> temp;

	int i = 0;

	while (i < n) {

		if (separate[i] == 0) {
			string s = "";
			s = str[i];
			
			temp.push_back(s);
			i += 1;
		}

		else {
			if (str[i + 1] == '+') {
				temp.push_back(to_string((str[i] - '0') + (str[i + 2] - '0')));
			}

			else if (str[i + 1] == '-') {
				temp.push_back(to_string((str[i] - '0') - (str[i + 2] - '0')));
			}

			else if (str[i + 1] == '*') {
				temp.push_back(to_string((str[i] - '0') * (str[i + 2] - '0')));
			}

			i += 3;
		}
	}
	int func_res = stoi(temp[0]);

	for (int i = 1; i < temp.size(); i++) {
		
		if (temp[i] == "+") {
			func_res += stoi(temp[i + 1]);
			i += 1;
		}
		else if (temp[i] == "-") {
			func_res -= stoi(temp[i + 1]);
			i += 1;
		}
		else if (temp[i] == "*") {
			func_res *= stoi(temp[i + 1]);
			i += 1;
		}
	}

	return func_res;
}

void dfs(int node) {

	res = max(res, calc());

	for (int i = node; i + 2 < n; i += 2) {
		if (separate[i] == 0 && separate[i + 2] == 0) {
			separate[i] = 1, separate[i + 2] = 1;
			dfs(node + 4);	
			separate[i] = 0, separate[i + 2] = 0;
		}
	}
}
int main(void) {

	scanf("%d", &n);
	scanf("%s", str);

	res = -0x7fffffff;

	dfs(0);

	printf("%d\n", res);
	return 0;
}
