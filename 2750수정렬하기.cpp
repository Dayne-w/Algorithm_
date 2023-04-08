#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,a;
    vector<int> v;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for(int num : v){
        cout << num << '\n'; 
    }
}