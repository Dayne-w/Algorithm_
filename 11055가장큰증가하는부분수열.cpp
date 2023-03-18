#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, result = 0;
    int arr[1001];
    int dp[1001];
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    dp[1] = arr[1];
    for(int i = 2; i <= n; i++){
        int temp = 0;
        for(int j = 1; j < i; j++){
            if(arr[i] > arr[j]){
                if(temp < dp[j]){
                    temp = dp[j];
                }
            }
        }
        dp[i] = temp + arr[i];
    }
    for(int k = 1; k <= n; k++){
        if(result < dp[k]){
            result = dp[k];
        }
    }
    cout << result;
}