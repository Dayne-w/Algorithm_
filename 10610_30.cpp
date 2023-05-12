#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int sum = 0;
    string str;
    vector<int> v;
    cin >> str;
    for(int i = 0; i < str.length(); i++){
        int num = str.at(i) - '0';
        sum += num;
        v.push_back(num);
    }
    sort(v.begin(), v.end(),greater<int>());
    if((v.back() == 0) && (sum % 3 == 0)){
        for(int i : v){
            cout << i;
        }
    }else{
        cout << -1;
    }
    return 0;
}