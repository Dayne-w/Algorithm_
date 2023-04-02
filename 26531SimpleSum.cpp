#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    getline(cin, str);
    int a = str[0] - 48;
    int b = str[4] - 48;
    int c = str[8] - 48;
    if(c == a+b)
        cout << "YES";
    else
        cout << "NO";
}