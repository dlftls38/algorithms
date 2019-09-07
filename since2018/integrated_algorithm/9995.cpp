#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef pair<int,double> pid;

string arr[151] = {
    "1001110000000100111000001010110000100001000100000111100000",
    "1001110000000100111000001010110000100001000100000111100000",
    "1001110000001100111000101010110001100001000100000111100000",
    "1001010011000100011000001000101000110011001001010111100001",
    "1001010011000100011000001000101000110011001001010111100001",
    "1101010011001100011000101000101001110011001001010111101001",
    "0011011110100110010011001100101000110011000000000111100000",
    "0011011110100110010011001100101000110011000000000111100000",
    "0011011110101110010011101100101001110011000000000111100000",
    "0000000000000000000000000000000000000000000000000000000000",
    "0000000000000000000000000000000000000000000000000000000000",
    "0000100000000100011000101111110000101101000000010111110100",
    "0000000000000000000000000000000000000000000000000000000000",
    "0000000000000000000000000000000000000000000000000000000000",
    "1000010000000100011000101010110000100011000100010111110000",
    "0100000000000100011000001100100000100001000000010111111000",
    "0100000000000100011000001100100000100001000000010111111000",
    "0100000000000100011000101100100000100001000000010111111000",
    "1000010000000100011111001100101110110101010000000111110000",
    "1001010000001100011111101100101110110101010000000111110000",
    "0100000000000100011000001100100000100001000000010111111000",
    "0100000000000100011000101100100000100001000000010111111000",
    "0001000000000100011000001110101001110001000100001111110010",
    "0001000000000100011000101110101001110001000100001111110010",
    "0001110010000100010000011100101110110011010000000111100000",
    "0001110010000100010000111100101110110011010000000111110000",
    "1001010010000100011000001000101001110011000010110111110000",
    "1001010010000100011000101000101001110011000010110111110000",
    "1001010000100100011011001100101110110001010100010111110000",
    "1001010000100100011011001100101110110001010100010111110000",
    "1011010010101100011111101100101111110111011111111111110000",
    "1001010000100100011011001100101110110001010100000111110000",
    "1001010000100100011011001100101110110001010100000111110000",
    "1011010010101100011111101100101111110111011111101111110000",
    "0001100010110100011011011101111110111111111001000111100010",
    "0001100010110100011011111101111110111111111001000111100010",
    "0000000000001100011000001001101000110001001001000111100001",
    "0000000000001100011000101001101000110001001001000111100001",
    "0001100010100100011011011101110110111111111001000111100010",
    "0001100010100100011011111101110110111111111001000111100010",
    "0000000000000100011100001110100000100101000100011111111010",
    "0000000000000100011100101110100000100101000100011111111010",
    "1000100000000100111000001010110000100001000100000111100000",
    "1000100000000100111000001010110000100001000100000111100000",
    "1000100000000100111000101010110000100001000100000111100000",
    "1000110000000100111000001010110000110001000100010111110000",
    "1000110000000100111000101010110000110001000100010111110000",
    "0000100000000100011000001010110000101001000100000111110100",
    "0000100000000100011000101010110000101001000100010111110100",
    "1000010000000100011000001000100001110001000100110111110000",
    "1000010000000100011000101000100001110001000100110111110000",
    "1000100000100100011100001100101110110101010000011111110010",
    "1000100000101100011100101100101110110101010000011111110010",
    "0011111110110110010011001100101000110011000000010111100000",
    "0011111110110110010011101100101000110011000000010111100000",
    "0001010010000101011100001100101111110011000000110111110001",
    "0001010010000101011100101100101111110011000000110111110001",
    "0001010000001100011000001000101000110001001001010111110001",
    "0001010000001100011000101000101000110001001001010111110001",
    "0010001100100110010011001100100000111001000000000111110000",
    "0011011110100110010011001100100001111011000000000111110000",
    "0011011110100111010011101100100001111011000000100111110000",
    "0000100010010100011100011101101000101101110000001111110110",
    "0000100010010100011100011101101000101101110000001111110110",
    "0000100010010100011100111101101000101101110000001111110110",
    "0001010010000101011000001100100001110011001001100111110000",
    "0001010010000101011000001100100001110011001001100111110000",
    "0001010010000101011000101100100001110011001001100111110000",
    "1000100000000100111000001010110000100001000100000111110000",
    "1000100000000100111000001010110000100001000100000111110000",
    "1000100000000100111000101010110000100001000100000111110000",
    "1010001100100110010011001110100000100001000100000111110000",
    "1010001100100110010011101110100000100001000100000111110000",
    "0001010010000100011000001000100001110011001011100111100000",
    "0001010010000100011000001000100001110011001011100111100000",
    "0001010010001100011000101000100001110011001011100111100000",
    "0001000000000100011000001000111000100001001001000111100001",
    "0001000000000100011000101000111000100001001001000111100001",
    "0011100100110110011011001101101001111101001001000111100100",
    "0011110110110110011011101101101001111111001001000111100100",
    "0000100000000100011000001100100110100001110000000111000000",
    "0000100000000100011000101100100110100001110000000111000000",
    "1100000000000100011000001000101000100001000000010111111000",
    "0100000000000100011000001000100000100001000000010111111000",
    "0100000000000100011100101000100000100001000000011111111000",
    "0010001100100110010011001101100000100001000000000111110000",
    "0010001100100110010011101101100000100001000000000111110000",
    "0000000000000100011100001110100110110001011101101111110000",
    "0001010010000100011100101110100110110011011101101111110000",
    "0010000100100110010011001100100000100001000000000111100000",
    "0010000100100110010011101100100000100001000000001111100000",
    "0000000000000100011100001110100100101101000100001111110110",
    "0000000000000100011100001110100100101101000100001111110110",
    "0001010010000100011100101110100110101111000100001111110110",
    "0001010000001100011100001000101001110001000010101111100000",
    "0000100010010100011100011101100000101111100000001111110110",
    "0000100010010100011100111101100000101111100000001111110110",
    "1011010100100110010011001100100000110001000000100111110000",
    "1011010100100110010011101100100000110001000000100111110000",
    "0000100000000100010100011100100110100001010000001111010000",
    "0000100000000100010100111100100110100001010000001111010000",
    "0001100000000100111000011010110000101001100100000111110100",
    "0001100000000100111000111010110000101001100100000111110100",
    "0001010010000100011011001000101001110011001011110111110000",
    "0001010010000100011011101000101001110011001011110111110000",
    "0001010010000101011000001100100001100011000000100111110000",
    "0001010010000101011000001100100001100011000000100111110000",
    "1011010010100100011011101100111111110111011011100111110000",
    "0000100000000100011100001100100110100101011101001111110000",
    "0000100000000100011100101100100110100101011101001111110000",
    "0001010000001100011011001100101111110001011011100111110000",
    "1011010010001100011011101100101111110011011011100111110000",
    "0001110010110110011011111101111111101111011011100111100110",
    "1000110000000100111000101010110000100001000100000111110000",
    "1011010010101110011011101100111111110111011011110111110000",
    "0010001100100110010011001100100000100001000000000111100000",
    "0010001100100110010011101100100000100001000000000111100000",
    "0010001100100110010011001100100000100001000000000111100000",
    "0010001100100110010011101100100000100001000000000111100000",
    "0010101100100110010011011100100110101001100000000111000000",
    "0010101100100110010011111100100110101001100000000111000100",
    "0000100010010100011100111101110110101111110000001111110110",
    "1000010000000100011000101100100000100001000000010111111000",
    "0000100010110110010111111100100000101111100000001111110100",
    "0001110010000100010000111100101110101011010000000111110000",
    "0001010010000100011000101000101000101011001001000111110000",
    "1001010010000101011000101100100001110011000000100111110000",
    "0011010000100100011011101100111111100001011011100111100000",
    "0000000000000000000000000000000000000000000000000000000000",
    "0011011100101110010111101100100111100001001011001111100000",
    "0011011100101110010011101101101110101001010000000111100000",
    "0000000000000000000000000000000000000000000000000000000000",
    "0000000000000100011000001100101000110101000000000111100000",
    "0010001100101110011011101100101000110101000000000111100000",
    "0000100000001100011000101100101110110101010000000111100000",
    "0000000000001100011000101100101000110101001001000111100001",
    "0000100000000100011011101100111110101101010000010111010000",
    "0010011100100110010011001100100000100001000010100111110000",
    "0010011100100110010011101100100000100001000010100111110000",
    "0010011000100110010011001110100000110001000010110111110000",
    "1010011100100110010011101110100000110011000010110111110000",
    "0101010001001100011100101100101001100001001011111111111000",
    "0011000010100100011011101100110111101111011011100111100000",
    "0100010000101110011011101100100000100001100010010111001000",
    "0100110000001100011000111100100110100001010010010111001000",
    "0100010000001100011000101101100000100001001011010111001001",
    "0010001000100110011011101101101110100001011001000111100000",
    "0010001000100110011011101101101110100001011001000111100000",
    "1111011111101110011011101101101111100011011011110111101000",
    "0001110010110111011111111101111111101111111011111111000110",
    "1111111111111111111111111111111111111111111111111111111111"

};

int main(){
    int n; cin >> n;
    string ans;
    for(int i = 0 ; i < 58 ; i++) ans += '0';

    for(int i = 0 ; i < n ; i++){
        string tmp; cin >> tmp;
        int num = (tmp[2]-'0')*10+(tmp[3]-'0');
        if(tmp[0]=='H'){
            ans[num-1] = '1';
        }
        else{
            ans[num+7] = '1';
        }
    }
    for(int i = 0 ; i < 151 ; i++){
        int cnt = 0;
        for(int j = 0 ; j < 58 ; j++){
            if(ans[j]==arr[i][j]&&arr[i][j]=='1') cnt++;
        }
        if(cnt==n){
            cout << i+1 << ' ';
        }
    }
}
