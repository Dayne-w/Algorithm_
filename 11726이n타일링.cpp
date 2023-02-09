#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int arr[n+1];
    arr[1] = 1;
    arr[2] = 2;
    for(int i = 3; i <= n; i++){
        arr[i] = (arr[i-1] % 10007) + (arr[i-2] % 10007);
    }
    cout << arr[n] % 10007;
    return 0;
}