#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[1001], dp[1001][3];
    int n, result = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    for(int i = 1; i <= n; i++){
        dp[i][1] = 1;
        dp[n-i+1][2] = 1;
        for(int j = 1; j < i; j++){
            if(arr[j] < arr[i] && dp[i][1] < dp[j][1] + 1){
                dp[i][1] = dp[j][1] + 1;
            }
            if(arr[n-j+1] < arr[n-i+1] && dp[n-i+1][2] < dp[n-j+1][2] + 1){
                dp[n-i+1][2] = dp[n-j+1][2] + 1;
            }
        }
    }
    for(int i = 1; i <= n; i++){
        if(result < dp[i][1] + dp[i][2] - 1)
            result = dp[i][1] + dp[i][2] - 1;
    }
    cout << result;
}