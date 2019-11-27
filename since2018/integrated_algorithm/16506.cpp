#include <iostream>
#include <string>
using namespace std;

const string reg[] = {"000", "001", "010", "011", "100", "101", "110", "111"};
const string con[] = {"0000", "0001", "0010", "0011", "0100", "0101", "0110", "0111",
                      "1000", "1001", "1010", "1011", "1100", "1101", "1110", "1111"};

bool opcode(string &op) {
    if (!op.compare(0, 3, "ADD", 3)) cout << "0000";
    else if (!op.compare(0, 3, "SUB", 3)) cout << "0001";
    else if (!op.compare(0, 3, "MOV", 3)) cout << "0010";
    else if (!op.compare(0, 3, "AND", 3)) cout << "0011";
    else if (!op.compare(0, 2, "OR", 2)) cout << "0100";
    else if (!op.compare(0, 3, "NOT", 3)) cout << "0101";
    else if (!op.compare(0, 4, "MULT", 4)) cout << "0110";
    else if (!op.compare(0, 5, "LSFTL", 5)) cout << "0111";
    else if (!op.compare(0, 5, "LSFTR", 5)) cout << "1000";
    else if (!op.compare(0, 5, "ASFTR", 5)) cout << "1001";
    else if (!op.compare(0, 2, "RL", 2)) cout << "1010";
    else if (!op.compare(0, 2, "RR", 2)) cout << "1011";
    if (op[(int)op.size()-1] == 'C') {
        cout << "10";
        return true;
    } else {
        cout << "00";
        return false;
    }
}

void solve() {
    string OP;
    int D, A, B;
    cin >> OP >> D >> A >> B;
    if (opcode(OP)) cout << reg[D] << reg[A] << con[B] << '\n';
    else cout << reg[D] << reg[A] << reg[B] << "0\n";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N;
    cin >> N;
    while (N--) solve();
    return 0;
}
