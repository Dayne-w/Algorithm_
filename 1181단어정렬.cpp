#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(string str1, string str2){
    if(str1.length() == str2.length()){
        return str1 < str2;
    }else{
        return str1.length() < str2.length();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    vector<string> v;
    cin >> n;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        v.push_back(str);
    }
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < n; i++){
        if(v[i] == v[i+1]){
            continue;
        }else{
            cout << v[i] << '\n';
        }
    }
}
