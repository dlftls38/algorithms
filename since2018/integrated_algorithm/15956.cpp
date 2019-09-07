#include <iostream>

#include <string>

#include <vector>

#include <map>

#include <set>

#include <algorithm>

#include <cstring>

using namespace std;

 

const int MAX = 1000000;

 

string input;

int parent[MAX];

vector<string> group[MAX];

bool hasNumber[MAX];

 

//Union Find

int find(int num)

{

        if (parent[num] < 0)

                 return num;

        return parent[num] = find(parent[num]);

}

 

void merge(int a, int b)

{

        a = find(a);

        b = find(b);

 

        if (a == b)

                 return;

 

        if (parent[a] < parent[b])

                 swap(a, b);

        parent[b] += parent[a];

        parent[a] = b;

}

 

int main(void)

{

        ios_base::sync_with_stdio(0);

        cin.tie(0);

 

        memset(parent, -1, sizeof(parent));

        cin >> input;

        input += "&&";

 

        map<string, int> str2int; //������ ������ ��ȣ

        vector<string> int2str; //��ȣ�� ������

 

        vector<pair<int, int>> same; //==���� ����� ����

        vector<pair<int, int>> diff; //!=���� ����� ����

 

        string tempS[2]; //�Ľ����� ���� ���� �� ������ �����Ƿ� ����

        bool usingSpos = 0; //���� �Ľ����� ���� ��/�ڸ� ǥ��

        bool isDifferent; //���� �Ľ����� ���� ==���� !=���� ǥ��

 

        for (int i = 0; i < input.size(); i++)

        {

                 //���� ���� ����

                 if (input[i] != '=' &&input[i] != '&' && input[i] != '!')

                         tempS[usingSpos].push_back(input[i]);

                 //���� ù ��° ������ �ϼ����� ���

                 else if (usingSpos == 0)

                 {

                         isDifferent = (input[i] == '!');

                         usingSpos = 1;

                         i++;

                 }

                 //���� �� ��° ������ �ϼ����� ���

                 else

                 {

                         int a, b;

                         //������ �ش��ϴ� ��ȣ�� ã�Ƴ��ų� ���� �ű��

                         if (str2int.count(tempS[0]))

                                 a = str2int[tempS[0]];

                         else

                         {

                                 str2int[tempS[0]] = int2str.size();

                                 a = int2str.size();

                                 int2str.push_back(tempS[0]);

                         }

                        

                         if (str2int.count(tempS[1]))

                                 b = str2int[tempS[1]];

                         else

                         {

                                 str2int[tempS[1]] = int2str.size();

                                 b = int2str.size();

                                 int2str.push_back(tempS[1]);

                         }

 

                         //==�� same, !=�� diff

                         if (!isDifferent)

                                 same.push_back({ a, b });

                         else

                                 diff.push_back({ a, b });

 

                         tempS[0] = tempS[1] = "";

                         usingSpos = 0;

                         i++;

                 }

        }

 

        string answer;

 

        //==���� ����� ������Ʈ���� ���� ��ģ��

        for (int i = 0; i < same.size(); i++)

                 merge(same[i].first, same[i].second);

 

        //group�� i�� �θ�� �ϴ� ������ ��� �������� ����

        //int2str�� �̿��ϹǷ� ���� �׷쿡 �ߺ��� ���� X

        for (int i = 0; i < int2str.size(); i++)

                 group[find(i)].push_back(int2str[i]);

 

        //�� �׷��� ��ȸ�ϸ鼭 ���� ����

        for (int i = 0; i < int2str.size(); i++)

        {

                 //�� �׷쿡 ����� 2�� �̻� �ִٸ� �׻� ����

                 int cntNumber = 0;

                 for (int j = 0; j < group[i].size(); j++)

                         cntNumber += (isdigit(group[i][j][0]) || (group[i][j][0] == '-'));

                 if (cntNumber >= 2)

                 {

                         cout << "0==1";

                         return 0;

                 }

                 //����� �ִ� ���� ���߿� �ʿ��ϹǷ� ǥ��

                 if (cntNumber == 1)

                         hasNumber[i] = true;

 

                 //�׷��� ���Ұ� 3 �̻��̸�, �信 ���ԵǾ�� �Ѵ�

                 if (group[i].size() < 2)

                         continue;

 

                 //�� �׷쿡�� ���� ���̰� ª�� ������ ã�Ƴ���

                 int minLength = group[i][0].size(), minIdx = 0;

                 for (int j = 1; j < group[i].size(); j++)

                 {

                         if (group[i][j].size() < minLength)

                         {

                                 minLength = group[i][j].size();

                                 minIdx = j;

                         }

                 }

                 string temp = group[i][minIdx];

                 for (int j = 0; j < group[i].size(); j++)

                 {

                         if (j == minIdx)

                                 continue;

                         answer += group[i][j] + "==" + temp + "&&";

                 }

 

                 //���̰� ���� ª�� ���Ҵ� �� �տ� ���д�

                 swap(group[i][0], group[i][minIdx]);

        }

 

        //!=�� ����Ǵ� �׷��� ���� ����

        //set�� ����ϰ� �׻� {���� ��, ū ��}���� �����Ͽ� �ߺ��� ���ش�

        set<pair<int, int>> diffZip;

        for (int i = 0; i < diff.size(); i++)

        {

                 int a = find(diff[i].first);

                 int b = find(diff[i].second);

                 //���� �׷쳢�� �ٸ��� = ������ ����

                 if (a == b)

                 {

                         cout << "a!=a";

                         return 0;

                 }

 

                 //�� �� ���ڸ� ������ ������ �ٸ��ٰ� ǥ���� �ʿ䰡 ����

                 if (hasNumber[a] && hasNumber[b])

                         continue;

                 diffZip.insert({ min(a, b), max(a, b) });

        }

 

        //�� �׷��� ���� ª�� ������ ��� !=�� �����Ѵ�

        for (set<pair<int, int>>::iterator it=diffZip.begin(); it!=diffZip.end(); it++)

        {

                 int a = (*it).first;

                 int b = (*it).second;

 

                 answer += group[(*it).first][0] + "!=" + group[(*it).second][0] + "&&";

        }

       

        //�׻� ���� ���� �־��ٸ� ���� ������� �� �ִ�

        if (answer.empty())

        {

                 cout << "1==1";

                 return 0;

        }

 

        //���ʿ��ϰ� �� &&�� ���ְ� ���

        for (int i = 0; i < 2; i++)

                 answer.pop_back();

        cout << answer << "\n";

 

        return 0;

}
