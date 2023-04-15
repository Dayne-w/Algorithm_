#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    long long num;
    int temp = 1;
    int max = 1;
    vector<long long> v;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    long long result = v[0];
    for(int i = 1; i < v.size(); i++){
        if(v[i] == v[i-1]){
            temp += 1;
            if(max < temp){
                max = temp;
                result = v[i];
            }
        }else{
            temp = 1;
        }
    }
    cout << result;
}