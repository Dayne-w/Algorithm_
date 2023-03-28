#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<pair<int, int>> v;
    int n;
    cin >> n;
    int x,y;
    v.push_back({0.,0});
    for(int i = 1; i <= n; i++){
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(),v.end());
    for(int i = 1; i <= n; i++){
        cout << v[i].first << ' ' << v[i].second << '\n';
    }
    return 0;
}