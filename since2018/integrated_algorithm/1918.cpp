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
 
    stack<char> s; // +-*/(를 저장할 스택
    int oIdx = 0; // 출력 문자열의 인덱스
 
    // str의 문자열을 끝까지
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') output[oIdx++] = str[i]; // A~Z는 출력문자열에 추가
        else {
            //그게아니면 전부 기호이므로
            //아래처럼 처리
 
            if (str[i] == '(') s.push(str[i]); // '('문자는 무조건 스택에 추가
            else if (str[i] == ')') { // ')'문자는 '('문자를 만날 때까지 pop
                while (s.top() != '(') {
                    output[oIdx++] = s.top();
                    s.pop();
                }
                s.pop();
            }
            else if (str[i] == '*' || str[i] == '/') {
                //우선순위가 나보다 높거나 같은것을 pop
                //( '/','*'보다 우선순위가 높은것은 없음)
                if (!s.empty() && (s.top() == '*' || s.top() == '/')) {
                    output[oIdx++] = s.top();
                    s.pop();
                }
                s.push(str[i]);
            }
            else { // '+', '-' 인 경우
                while (!s.empty() && s.top() != '(') {
                    //우선순위가 나보다 높거나 같은것을 pop
                    //('+', '-'보다는 전부 우선순위가 높으므로 '('나 스택이 빌 때까지 pop)
                    output[oIdx++] = s.top();
                    s.pop();
                }
                s.push(str[i]);
 
            }
        }
    }
 
    //스택에 남아있는 것을 전부 pop
    while (!s.empty()) {
        output[oIdx++] = s.top();
        s.pop();
    }
    output[oIdx] = '\0';
 
    printf("%s\n", output);
 
    return 0;
}

