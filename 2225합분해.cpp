#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    long long arr[201][201] = {0, };
    for(int a = 0; a <= n; a++){
        arr[a][1] = 1;
    }
    for(int i = 2; i <= k; i++){
        for(int j = 0; j <= n; j++){
            for(int l = 0; l <= j; l++){
                arr[j][i] += arr[l][i-1];
            }
            arr[j][i] %= 1000000000;
        }
    }
    cout << arr[n][k];
    return 0;
}
