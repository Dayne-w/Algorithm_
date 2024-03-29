#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    int arr[1001][1001];
    int dp[1001][1001];
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i <= m; i++){
        dp[0][i] = 0;
    }
    for(int j = 0; j <= n; j++){
        dp[j][0] = 0 ;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            dp[i][j] = max({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}) + arr[i][j];
        }
    }
    cout << dp[n][m];
}