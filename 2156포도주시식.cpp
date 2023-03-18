#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, result = 0;
    cin >> n;
    int arr[10001];
    int sum[10001][4];
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    sum[1][1] = arr[1];
    sum[1][2] = 0;
    sum[2][1] = arr[2];
    sum[2][2] = arr[1] + arr[2];
    sum[3][1] = arr[1] + arr[3];
    sum[3][2] = arr[2] + arr[3];
    sum[3][3] = 0;
    for(int i = 4; i <= n; i++){
        sum[i][1] = max({sum[i-2][1] + arr[i], sum[i-2][2] + arr[i], sum[i-2][3] + arr[i]});
        sum[i][2] = max(sum[i-1][1] + arr[i], sum[i-1][3] + arr[i]);
        sum[i][3] = max(sum[i-3][1] + arr[i], sum[i-3][2] + arr[i]);
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 3; j++){
            if(result < sum[i][j]){
                result = sum[i][j];
            }
        }
    }
    cout << result;
}