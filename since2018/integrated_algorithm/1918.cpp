#include <cstdio>
#include <iostream>
#include <utility>
#include <stack>
#include <string.h>
using namespace std;
 
int main() {
    char str[1000]; //input
    char output[1000]; // output
 
    scanf("%s", str);
 
    stack<char> s; // +-*/(�� ������ ����
    int oIdx = 0; // ��� ���ڿ��� �ε���
 
    // str�� ���ڿ��� ������
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') output[oIdx++] = str[i]; // A~Z�� ��¹��ڿ��� �߰�
        else {
            //�װԾƴϸ� ���� ��ȣ�̹Ƿ�
            //�Ʒ�ó�� ó��
 
            if (str[i] == '(') s.push(str[i]); // '('���ڴ� ������ ���ÿ� �߰�
            else if (str[i] == ')') { // ')'���ڴ� '('���ڸ� ���� ������ pop
                while (s.top() != '(') {
                    output[oIdx++] = s.top();
                    s.pop();
                }
                s.pop();
            }
            else if (str[i] == '*' || str[i] == '/') {
                //�켱������ ������ ���ų� �������� pop
                //( '/','*'���� �켱������ �������� ����)
                if (!s.empty() && (s.top() == '*' || s.top() == '/')) {
                    output[oIdx++] = s.top();
                    s.pop();
                }
                s.push(str[i]);
            }
            else { // '+', '-' �� ���
                while (!s.empty() && s.top() != '(') {
                    //�켱������ ������ ���ų� �������� pop
                    //('+', '-'���ٴ� ���� �켱������ �����Ƿ� '('�� ������ �� ������ pop)
                    output[oIdx++] = s.top();
                    s.pop();
                }
                s.push(str[i]);
 
            }
        }
    }
 
    //���ÿ� �����ִ� ���� ���� pop
    while (!s.empty()) {
        output[oIdx++] = s.top();
        s.pop();
    }
    output[oIdx] = '\0';
 
    printf("%s\n", output);
 
    return 0;
}

