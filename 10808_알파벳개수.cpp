#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int result[26] = {0,};
    string str;
    cin >> str;
    for(int i = 0; i < str.length(); i++){
        result[str[i] - 97] += 1;
    }
    for(int num : result){
        cout << num << ' ';
    }
    return 0;
}