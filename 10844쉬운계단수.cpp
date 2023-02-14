#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    long long total = 0;
    cin >> n;
    long long arr[n+1][10];
    arr[1][0] = 0;
    for(int i = 1; i <= 9; i++){
        arr[1][i] = 1;
    }
    for(int i = 2; i <= n; i++){
        for(int j = 0; j <= 9; j++){
            if(j == 0){
                arr[i][j] = arr[i-1][j+1] % 1000000000;
            }else if(j == 9){
                arr[i][j] = arr[i-1][j-1] % 1000000000;
            }else{
                arr[i][j] = (arr[i-1][j-1] + arr[i-1][j+1]) % 1000000000;
            }
        }
    }
    for (int k = 0; k <= 9; k++){
        total += arr[n][k];
    }
    cout << total % 1000000000;
    return 0;
}