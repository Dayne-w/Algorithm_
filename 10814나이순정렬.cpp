#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool cmp (pair<int,string> a, pair<int,string> b){
    if(a.first == b.first){
        return false;
    }else{
        return a.first < b.first;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int age;
    string name;
    vector<pair<int,string>> v;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> age >> name;
        v.push_back(pair<int, string>(age, name));
    }
    stable_sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < n; i++){
        cout << v[i].first << ' ' << v[i].second << '\n';
    }
}