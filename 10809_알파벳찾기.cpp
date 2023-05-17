#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int alphabet[26];
    fill_n(alphabet, 26, -1);
    string str;
    cin >> str;
    for(int i = 0; i < str.length(); i++){
        int n = str[i] - 'a';   // a = 0; b = 1;
        if(alphabet[n] != -1){
            continue;
        }else{
            alphabet[n] = i;
        }
    }
    for(int i = 0; i < sizeof(alphabet) / sizeof(int); i++){
        cout << alphabet[i] << ' ';
    }
}