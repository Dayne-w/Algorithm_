#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2){
    if(p1.first == p2.first){
        return p1.second < p2.second;
    }else{
        return p1.first < p2.first;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b;
    vector<pair<int,int>> v;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        v.push_back(pair<int,int>(a,b));
    }
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < n; i++){
        cout << v[i].first << ' ' << v[i].second << '\n';
    }
}
