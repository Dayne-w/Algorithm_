#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    long long arr[n+1][2];
    arr[1][0] = 0;
    arr[1][1] = 1;
    for(int i = 2; i <= n; i++){
        arr[i][0] = arr[i-1][0] + arr[i-1][1];
        arr[i][1] = arr[i-1][0];
    }
    cout << arr[n][0] + arr[n][1];
    return 0;
}