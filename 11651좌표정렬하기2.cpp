#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(const vector<int> &v1, const vector<int> &v2){
    if(v1[1] == v2[1]){
        return v1[0] < v2[0];
    }else{
        return v1[1] < v2[1];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(2,0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cin >> v[i][j];
        }
    }
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cout << v[i][j] << ' ';
        }
        cout << '\n';
    }
}