#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    vector<string> v;
    cin >> str;
    for(int i = 0; i < str.length(); i++){
        v.push_back(str.substr(i));
    }
    sort(v.begin(), v.end());
    for(string result : v){
        cout << result << '\n';
    }
    return 0;
}