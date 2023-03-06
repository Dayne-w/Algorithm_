#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    long long sum = 0;
    cin >> n;
    long long arr[1001][10] = {0};
    for(int i = 0; i <= 9; i++){
        arr[1][i] = 1;
    }
    for(int i = 2; i <= n; i++){
        for(int j = 0; j <= 9; j++){
            long long temp = 0;
            for(int k = 0; k <= j; k++){
                temp += arr[i-1][k];
            }
            arr[i][j] = temp % 10007;
        }
    }
    for(int l = 0; l <= 9; l++){
        sum += arr[n][l];
    }
    cout << sum % 10007;
}