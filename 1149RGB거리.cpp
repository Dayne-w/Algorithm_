#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, result;
    cin >> n;
    int arr[n+1][4];
    for(int i = 1; i <= n; i++){
        cin >> arr[i][1];
        cin >> arr[i][2];
        cin >> arr[i][3];
    }
    for(int j = 2; j <= n; j++){
        arr[j][1] = arr[j][1] + min(arr[j-1][2], arr[j-1][3]);
        arr[j][2] = arr[j][2] + min(arr[j-1][1], arr[j-1][3]);
        arr[j][3] = arr[j][3] + min(arr[j-1][1], arr[j-1][2]);
    }
    result = min({arr[n][1], arr[n][2], arr[n][3]});
    cout << result;
}