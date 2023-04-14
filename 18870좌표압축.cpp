#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(pair<int,int> p1, pair<int,int> p2){
    return p1.first < p2.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, num;
    vector<pair<int,int>> v;
    int result[1000001] = {0,};
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> num;
        v.push_back(pair<int,int>(num,i));
    }
    sort(v.begin(), v.end(), cmp);
    result[v[0].second] = 0;
    int count = 0;
    for(int i = 1; i < n; i++){
        if(v[i].first == v[i-1].first){
            result[v[i].second] = count;
        }else{
            result[v[i].second] = ++count;
        }
    }
    for(int i = 0; i < n; i++){
        cout << result[i] << ' ';
    }
}

