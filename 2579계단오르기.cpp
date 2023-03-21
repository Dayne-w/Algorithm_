#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[301] = {0,};
    int dp[301][3];
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    dp[1][1] = arr[1];
    dp[2][1] = arr[2];
    dp[2][2] = arr[1] + arr[2];
    dp[3][1] = arr[2] + arr[3];
    dp[3][2] = arr[1] + arr[3];
    for(int i = 4; i <= n; i++){
        dp[i][1] = dp[i-1][2] + arr[i];
        dp[i][2] = max(dp[i-2][1] + arr[i], dp[i-2][2] + arr[i]);
    }
    cout << max(dp[n][1], dp[n][2]);
}