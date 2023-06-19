#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long a = 0, b = 0;
    string str1, str2, str3, str4;
    cin >> str1 >> str2 >> str3 >> str4;
    str1 += str2;
    str3 += str4;
    for(int i = 0; i < str1.length(); i++){
        long long temp = 1;
        for(int j = str1.length() - i - 1; j > 0; j--){
            temp *= 10;
        }
        a += (str1[i] - '0') * temp;
    }
    for(int i = 0; i < str3.length(); i++){
        long long temp = 1;
        for(int j = str3.length() - i - 1; j > 0; j--){
            temp *= 10;
        }
        a += (str3[i] - '0') * temp;
    }
    cout << a+b;
}