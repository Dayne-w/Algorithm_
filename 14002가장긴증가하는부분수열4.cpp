#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, idx, temp = 0;
    cin >> n;
    int arr[n+1];
    int result[n+1];
    vector<vector<int>> vec(n+1,vector<int>());
    vector<int>::iterator iter;
    arr[0] = 0;
    result[0] = 0;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    int answer = 0;
    for(int j = 1; j <= n; j++){
        bool check = false; // 이전 숫자들 중에서 현재 숫자보다 작은 값이 있으면 check = true, 없으면 check = false
        result[j] = 1;
        for(int k = 1; k < j; k++){
            if(arr[k] < arr[j]){    
                if(result[k] + 1 > result[j]){
                    result[j] = result[k] + 1;
                    temp = k;
                }
                check = true;
            }
        }
        if(check == false){
            vec[j].push_back(arr[j]);
        }else{
            for(int z = 0; z < vec[temp].size(); z++){
                vec[j].push_back(vec[temp].at(z));
            }
            vec[j].push_back(arr[j]);
        }
        if(result[j] > answer){
            idx = j;
            answer = result[j];
        }
    }
    cout << answer << '\n';
    for(iter = vec[idx].begin(); iter != vec[idx].end(); iter++){
        cout << *iter << ' ';
    }
    return 0;
}
