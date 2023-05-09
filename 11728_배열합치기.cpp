#include <iostream>
#include <vector>

using namespace std;

int i, j= 0;
vector<int> v1, v2, result;

void merge(vector<int> &v1, vector<int> &v2){
    while(i != v1.size() && j != v2.size()){
        if(v1[i] <= v2[j]){
            result.push_back(v1[i++]);
        }else{
            result.push_back(v2[j++]);
        }
    }
    if(i != v1.size()){
        while(i != v1.size()){
            result.push_back(v1[i++]);
        }
    }else if(j != v2.size()){
        while(j != v2.size()){
            result.push_back(v2[j++]);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, num;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> num;
        v1.push_back(num);
    }
    for(int i = 0; i < m; i++){
        cin >> num;
        v2.push_back(num);
    }
    merge(v1, v2);
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << ' ';
    }
}